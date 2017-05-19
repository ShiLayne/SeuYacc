#include "LrTable.h"

LrTable::LrTable(contextTb conTb)
{
	tokens = conTb.getTokenTbl();
	ExprTbl = conTb;
	LRTbl.push_back(LrState(conTb.S, conTb));
	map<string, int> jumpM;
	int maxID = 1;
	for (int i = 0; i < LRTbl.size(); i++)//LRTbl在循环中size也在不断的更新
	{
		jumpM.clear();
		//广度优先遍历
		for (int j = 0; j < LRTbl[i].StateNext.size(); j++)
		{
			string currS = LRTbl[i].StateNext[j];
			int position = -1;
			LrState newState(LRTbl[i], currS, conTb);
			for (int k = 0; k < LRTbl.size(); k++)
			{
				if (LRTbl[k] == newState)
				{
					position = k;//存在重复项就把指针指向当前位置
					break;
				}
			}
			if (position >= 0)//存在重复项
				jumpM.insert(pair<string, int>(currS, position));
			else
			{
				LRTbl.push_back(newState);
				jumpM.insert(pair<string, int>(currS, LRTbl.size() - 1));
			}
		}
	}
	createActGoto();
}

void LrTable::createActGoto()
{

}
