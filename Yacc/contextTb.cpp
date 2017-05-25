#include "contextTb.h"
#include <iostream>
#include <algorithm>
#include<numeric>

vector<string> contextTb::getFirst4Update(string s, vector<string> set)
{
	vector<int> Num;
	vector<string> result;
	if(judgeTorE(s)==0)	//如果是终结符
		result.push_back(s);
	else//如果是非终结符
	{
		vector<string>::iterator pushIt = find(set.begin(), set.end(), s);
		if (exprMap.count(s) > 0&& pushIt != set.end())		//set的目的是防止出现循环的规则产生死循环递归
		{
			set.erase(pushIt);
			Num = exprMap[s];
			vector<int> extendFlag;
			for (int i = 0; i < Num.size(); i++)
				extendFlag.push_back(1);
			for (int i = 0; i < Num.size(); i++)
			{
				bool emptyFlag;
				if (Table[Num[i]].getRight().size()==0)//如果右边是epsilon
				{
					vector<string> newR, insertR;
					insertR.push_back(epsilon);
					set_union(insertR.begin(), insertR.end(), result.begin(), result.end(), back_inserter(newR));
					sort(newR.begin(), newR.end());
					result = newR;
				}
				bool exflag = true;															//标记是否修改extendFlag
				for (int j = 0; j < Table[Num[i]].getRight().size(); j++)
				{
					string FirstRight = Table[Num[i]].getRight()[j];
					vector<string> newR, insertR;
					if (FirstMap.count(FirstRight) > 0)
						insertR = FirstMap[FirstRight];
					else
						insertR = getFirst4Update(FirstRight, set);
					if (insertR.size() == 0)
					{
						exflag = false;
						break;
					}
					set_union(insertR.begin(), insertR.end(), result.begin(), result.end(), back_inserter(newR));
					sort(newR.begin(), newR.end());
					result = newR;
					emptyFlag = true;//判断First中是否有epsilon，如果有就不再求下一个的Fisrt符号
					if (find(insertR.begin(), insertR.end(), epsilon) == insertR.end())
						emptyFlag = false;
					if ((j == Table[Num[i]].getRight().size() - 1) && emptyFlag)
					{
						vector<string> newR, insertR;
						insertR.push_back(epsilon);
						set_union(insertR.begin(), insertR.end(), result.begin(), result.end(), back_inserter(newR));
						sort(newR.begin(), newR.end());
						result = newR;
					}
					if (!emptyFlag)
						break;
				}
				if (exflag)									//如果没有出现死循环迭代
					extendFlag[i] = 0;
			}
			//更新FIrstMap
			FirstMap.insert(pair<string, vector<string>>(s, result));
			if (accumulate(extendFlag.begin(), extendFlag.end(), 0) > 0
				&&find(result.begin(),result.end(),epsilon)!=result.end())
				//如果s在文法规则里有死循环，同时s里有epsilon，就继续读extendFlag为1(存在死循环)的规则
			{
				for (int i = 0; i < Num.size(); i++)
				{
					set.push_back(s);
					getFirst4Update(s, set);
				}
			}
		}
	}
	return result;
}

contextTb::contextTb()
{
}

contextTb::contextTb(vector<string> tokens)
{
	tokenTbl = tokens;
}

conFreeGram contextTb::get(int id)
{
	return Table[id];
}

vector<conFreeGram> contextTb::getTable()
{
	return Table;
}

vector<string> contextTb::getTokenTbl()
{
	return tokenTbl;
}

vector<string> contextTb::getExprTbl()
{
	return exprTbl;
}

vector<string> contextTb::getFisrt(string s)
{
	int re = judgeTorE(s);
	vector<string> resu;
	if (re == 0)
		resu.push_back(s);
	else if (re == 1)
		resu = FirstMap[s];
	return resu;
}


void contextTb::updateFirstMap()
{
	FirstMap.clear();
	for (int i = 0; i < exprTbl.size(); i++)
		getFirst4Update(exprTbl[i],exprTbl);
}

void contextTb::insert(string L, string R)
{
	if (find(exprTbl.begin(), exprTbl.end(), L) == exprTbl.end())
		exprTbl.push_back(L);
	int Num = Table.size();
	Table.push_back(conFreeGram(L, R, Num));
	if (exprMap.count(L) > 0)
		exprMap[L].push_back(Num);
	else
	{
		vector<int> N;
		N.push_back(Num);
		exprMap.insert(pair<string, vector<int>>(L, N));
	}
	if (Table.size() == 1)
		S.push_back(Table[0]);
}

void contextTb::createFirstTb()
{
}

pair<int, int> contextTb::getAssociation(string s)
{
	if (nonAsso.count(s) > 0)
		return pair<int, int>(1, nonAsso[s]);
	else if (leftAsso.count(s) > 0)
		return pair<int, int>(2, nonAsso[s]);
	else
		return pair<int, int>(0, 0);
}

pair<int, int> contextTb::getAssociation(int id)
{
	map<string, int>::iterator it;
	vector<string> target = get(id).getRight();
	for (it = nonAsso.begin(); it != nonAsso.end(); it++)
	{
		for (int i = 0; i < target.size(); i++)
			if ((it->first) == target[i])
				return pair<int,int>(1, it->second);
	}
	for (it = leftAsso.begin(); it != leftAsso.end(); it++)
	{
		for (int i = 0; i < target.size(); i++)
			if ((it->first) == target[i])
				return pair<int, int>(2, it->second);
	}
	return pair<int, int>(0,0);
}

int contextTb::judgeTorE(string s)
{
	if (find(tokenTbl.begin(), tokenTbl.end(), s) != tokenTbl.end())
		return 0;
	else
		return 1;
	/*else
	{
		//最终验证完成可删除此段和上面的find 加快运行速度
		std::cout << "error in judgeTorE for input " << s << endl;
		return -1;
	}*/
}
