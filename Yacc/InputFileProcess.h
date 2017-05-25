#ifndef INPUTFILEPROCESS_H
#define INPUTFILEPROCESS_H
#include<iostream>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include "contextTb.h"
using namespace std;
#define ERROR -1//定义ERROR的状态编号为-1
#define BEGIN 1//定义BEGIN的状态编号为-1
#define END 2//定义END的状态编号为-1
#define LAYER 3//定义LAYER的状态编号为-1

class InputFileProcess
{
public:
	ifstream ifile;
	ofstream ofile;
	int state;//定义整型变量表示状态编号
	string InputFileName;
	string OutputFileName;
	vector <string> tokenTb;
	vector <pair<string, string>> paraTb;
	map < string, int> nonassocTb;
	map <string, int> leftTb;
	vector<pair<string, vector<string>>> ruleTb;
	void OpenInOutFile();//打开输入输出文件
	int check(char ch);//检测当前位于‘%’后的符号来决定状态编号
	void DefinitionOutput(char &ch);//说明部分内容解析函数
	int StringCountCh(string &str, char ch);//计算字符串str中字符ch出现的个数
	contextTb RuleProcess();//规则处理部分处理函数
	void UserProOutput(char &ch);//用户子程序内容输出函数
};
#endif