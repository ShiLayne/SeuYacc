#pragma once
#include "contextTb.h"
#include "conFreeGram.h"
#include<map>
const string terminal = "$";
class LrState
{
private:
	vector<int> extend;									//扩展的flag
	vector<int> Dot;										//当前点的位置
public:
	vector<conFreeGram> context;					//插入时保证下conFreeGram的顺序
	vector<string> StateNext;							//状态的下一个输入的所有可能性,contextNext的并集
	vector<vector<string>> Follow;					//Follow字符
	map<string, vector<int>> contextNext;		//下一个可能输入对应的表达式的集合
public:
	LrState(LrState s, string input, contextTb tb);
	LrState(vector<conFreeGram>, contextTb tb);
	int size();
	int ContextSize(int id);
	int ifEnd(int id);											//判断文法[id]的Dot是否在结尾
	void updateFollow(vector<string> s, int pos);//s和Follow[pos]合并
	void updateNext(contextTb tb);					//做contextNext和StateNext的更新
	bool operator==(const LrState&);
};