#pragma once
#include "contextTb.h"
#include "LrState.h"
class LrTable
{
private:
	vector<LrState>	LRTbl;
private:
	void createActGoto();				/*创建GOTO表，同时对不存在项的标识出错误，注意移入规约冲突的处
												理*/
	bool handleConflict(int i, string s);		//第i条文法和运算符s的优先级/左右结合判断,true表示规约
public:
	contextTb				Tbl;												//记录所有读到的内容
	vector<map<string, int>>					jumpMap;			//记录LrTbl每个状态的跳转，构建Goto表用
	vector<map<string, pair<int, int>>> ActGoto_Tbl;		/*string对应token或者exprssion，pair中第
																					一项int中0移入/1规约，第二项为跳转目标或
																					规约规则*/
public:
	LrTable(contextTb conTb);		//利用构建的contextTb广度优先遍历构造LR（1）表

	vector<string>		getToken();
	vector<string>		getExpr();
	void Output();
};