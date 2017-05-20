#include "contextTb.h"
#include <iostream>
#include <algorithm>

vector<string> contextTb::getFirst4Update(string s)
{
	vector<int> Num;
	vector<string> result;
	if (judgeTorE(s)==1)//如果是Expr
	{
		if (exprMap.count(s) > 0)
		{
			Num = exprMap[s];
			for (int i = 0; i < Num.size(); i++)
			{
				string FirstRight = Table[Num[i]].getRight()[0];
				if (FirstRight != Table[Num[i]].getLeft())
				{
					vector<string> newR, insertR;
					if (FirstMap.count(FirstRight) > 0)
						insertR = FirstMap[FirstRight];
					else
						insertR = getFirst4Update(FirstRight);
					set_union(insertR.begin(), insertR.end(), result.begin(), result.end(), back_inserter(newR));
					sort(newR.begin(), newR.end());
					result = newR;
				}
			}
			//更新FIrstMap
			FirstMap.insert(pair<string, vector<string>>(s, result));
		}
	}
	else//如果是token
		result.push_back(s);
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
		getFirst4Update(exprTbl[i]);
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
}

void contextTb::createFirstTb()
{
}

int contextTb::judgeTorE(string s)
{
	if (find(tokenTbl.begin(), tokenTbl.end(), s) != tokenTbl.end())
		return 0;
	else if (find(exprTbl.begin(), exprTbl.end(), s) != exprTbl.end())
		return 1;
	else
	{
		/*最终验证完成可删除此段和上面的find 加快运行速度*/
		std::cout << "error in judgeTorE for input " << s << endl;
		return -1;
	}
}
