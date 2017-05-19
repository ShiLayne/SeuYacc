#include "contextTb.h"
#include <iostream>

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

void contextTb::insert(string R, string L)
{
	int Num = Table.size();
	Table.push_back(conFreeGram(R, L, Num));
	if (exprMap.count(R) > 0)
		exprMap[R].push_back(Num);
	else
	{
		vector<int> N;
		N.push_back(Num);
		exprMap.insert(pair<string, vector<int>>(R, N));
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
