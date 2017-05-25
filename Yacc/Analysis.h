#include<vector>
#include<map>
#include<iostream>
#include "LrTable.h"
using namespace std;

class Analysis
{
public:
	contextTb Tbl;
	vector<map<string, pair<int, int>>> ActGoto;  /*actiongoto表，string对应token或者是expression
												  pair中第一个int为0表示移进，为1表示规约,
												  第二项为跳转目标或者是规约规则*/
	vector<string> token;           
	vector<string> expression;                //非终结符S、T等
	int istoken(string);               //判断当前字符是不是终结符
	string file;                                          //语法分析程序输出文件
	Analysis(vector<map<string, pair<int, int>>> A, vector<string> t, vector<string> e,string f,contextTb tb)
	{
		Tbl = tb;
		ActGoto = A;
		token = t;
		expression = e;
		file = f;
	};
	int FindNextstate(int, string);       //参数值两个：当前状态值(int)和f非终结符(string),返回下一个状态，若没下个状态返回-1表示error
	void output();            //输出语法分析程序
};

