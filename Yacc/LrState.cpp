#include "LrState.h"
#include <algorithm>
#include <iostream>

LrState::LrState(LrState s, string input, contextTb tb)
{
	if (s.contextNext.count(input) > 0)
	{
		vector<int> num = s.contextNext[input];
		for (int i = 0; i < num.size(); i++)
		{
			Follow.push_back(s.Follow[i]);
			context.push_back(s.context[num[i]]);
			Dot.push_back(s.Dot[num[i]]+1);
			extend.push_back(s.extend[num[i]]);
		}
		int size = 0;
		//此处做闭包扩展处理
		while (size != context.size())
		{
			size = context.size();
			for (int i = 0; i < context.size(); i++)
			{
				if (extend[i]==0)
				{
					string Left = context[i].getRight()[Dot[i]];
					vector<string> follow = tb.getFisrt( context[i].getRight()[Dot[i] + 1]);
					//如果不是token
					if (tb.judgeTorE(Left)==1)
					{
						vector<int> TblNum = tb.exprMap[Left];
						for (int j = 0; j < TblNum.size(); i++)
						{
							for (int k = 0; k < context.size(); k++)
							{
								if (tb.get(TblNum[j]) > context[k])
									continue;
								else if (tb.get(TblNum[j]) == context[k] && Dot[k] == 0)//对重复二次扩展的合并
									updateFollow(follow, k);
								else if(tb.get(TblNum[j]) < context[k])
								{
									i++;
									Follow.insert(Follow.begin() + k, follow);
									context.insert(context.begin()+k,tb.get(TblNum[j]));
									Dot.insert(Dot.begin() + k, 0);
									extend.insert(extend.begin() + k, 0);
								}
							}
						}
					}
					extend[i] = 1;
				}
			}
		}
		updateNext(tb);

	}
	else
	{
		std::cout << "error in create LrState, State not have input: " << input << endl;
		exit(1);
	}
}

LrState::LrState(vector<conFreeGram> con, contextTb tb)
{
	context = con;
	for (int i = 0; i < context.size(); i++)
	{
		if (con[i].getRight().size() > 1)
			Follow.push_back(tb.getFisrt(con[i].getRight()[1]));
		else
		{
			vector<string> s;
			s.push_back(terminal);
			Follow.push_back((s));
		}
		Dot.push_back(0);
		extend.push_back(0);
	}

	int size = 0;
	//此处做闭包扩展处理
	while (size != context.size())
	{
		size = context.size();
		for (int i = 0; i < context.size(); i++)
		{
			if (extend[i] == 0)
			{
				string Left = context[i].getRight()[Dot[i]];
				vector<string> follow = tb.getFisrt(context[i].getRight()[Dot[i] + 1]);
				//如果不是token
				if (tb.judgeTorE(Left) == 1)
				{
					vector<int> TblNum = tb.exprMap[Left];
					for (int j = 0; j < TblNum.size(); i++)
					{
						for (int k = 0; k < context.size(); k++)
						{
							if (tb.get(TblNum[j]) > context[k])
								continue;
							else if (tb.get(TblNum[j]) == context[k] && Dot[k] == 0)//对重复二次扩展的合并
								updateFollow(follow, k);
							else if (tb.get(TblNum[j]) < context[k])
							{
								i++;
								Follow.insert(Follow.begin() + k, follow);
								context.insert(context.begin() + k, tb.get(TblNum[j]));
								Dot.insert(Dot.begin() + k, 0);
								extend.insert(extend.begin() + k, 0);
							}
						}
					}
				}
				extend[i] = 1;
			}
		}
	}
	updateNext(tb);
}

void LrState::
updateFollow(vector<string> s, int pos)
{
	vector<string> newFollow;
	sort(s.begin(), s.end());
	set_union(s.begin(), s.end(), Follow[pos].begin(), Follow[pos].end(), back_inserter(newFollow));
	sort(newFollow.begin(), newFollow.end());
	Follow[pos] = newFollow;
}

void LrState::updateNext(contextTb tb)
{
	for (int i = 0; i < context.size(); i++)
	{
		vector<string> slist;
		if (Dot[i] < context[i].getRight().size())
		{//LrState内第i个规则点后面的string
			string currString = context[i].getRight()[Dot[i]];
			//如果是expr
			if (tb.judgeTorE(currString) == 1)
			{
				slist = tb.FirstMap[currString];
			}
			//如果是token
			else
				slist.push_back(currString);
		}
		for (int j = 0; j < slist.size(); j++)
		{
			if (contextNext.count(slist[j]) > 0)
				contextNext[slist[j]].push_back(i);
			else
			{
				//扩充StateNext
				StateNext.push_back(slist[j]);
				vector<int> newNext;
				newNext.push_back(i);
				contextNext.insert(pair<string, vector<int>>(slist[j], newNext));
			}
		}
	}
}

bool LrState::operator==(const LrState &x)
{
	if (context.size() != x.context.size())
		return false;
	bool flag = true;
	for (int i = 0; i <min( context.size(),x.context.size()); i++)
	{
		if (Dot[i] == x.Dot[i] && context[i] == x.context[i] );
		else
		{
			flag = false;
			break;
		}
	}
	if (flag)
	{
		for (int i = 0; i < Dot.size(); i++)
		{
			if (Follow[i] == x.Follow[i]);
			else
			{
				flag = false;
				break;
			}
		}
	}
	return flag;
}
