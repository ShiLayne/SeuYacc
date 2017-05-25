#include "InputFileProcess.h"
#include "LrTable.h"
#include "contextTb.h"
#include "conFreeGram.h"
using namespace std;
int main()
{
	cout << "SeuYacc 程序开始运行!" << endl;
	InputFileProcess file;
	file.InputFileName = "minic.y";
	file.OutputFileName = "yacc.cpp";
	file.OpenInOutFile();
	char ch;//用于处理说明部分和用户子程序部分
	file.DefinitionOutput(ch);
	contextTb c = file.RuleProcess();
	c.updateFirstMap();
	LrTable tbl(c);
	//tbl.Output();
	for (int i = 0; i < c.getTable().size(); i++)
	{
		cout << c.getTable()[i].getLeft() << endl;
		for (int j = 0; j < c.getTable()[i].getRight().size(); j++)
		{
			cout << c.getTable()[i].getRight()[j] << endl;
		}
		cout << endl;
	}
	for (int m = 0; m < c.getTokenTbl().size(); m++)
	{
		cout << c.getTokenTbl()[m] << endl;
	}
	vector<pair<string, string>> ::iterator iter0; //迭代器用来访问vector
	for (iter0 = file.paraTb.begin(); iter0 != file.paraTb.end(); iter0++)
	{
		cout << iter0->first << "  " << iter0->second << endl;
	}
	map<string, int> ::iterator iter1; //迭代器用来访问vector
	for (iter1 = file.nonassocTb.begin(); iter1 != file.nonassocTb.end(); iter1++)
	{
		cout << iter1->first << "  " << iter1->second << endl;
	}
	map<string, int> ::iterator iter2; //迭代器用来访问vector
	for (iter2 = file.leftTb.begin(); iter2 != file.leftTb.end(); iter2++)
	{
		cout << iter2->first << "  " << iter2->second << endl;
	}
	vector<pair<string, vector<string>>> ::iterator iter; //迭代器用来访问vector
	for (iter = file.ruleTb.begin(); iter != file.ruleTb.end(); iter++)
	{
		cout << iter->first << endl;
		for (int i = 0; i != iter->second.size(); i++)
		{
			cout << iter->second[i] << endl;
		}
		cout << endl;
	}

	file.UserProOutput(ch);
	cout << "SeuYacc 程序成功结束运行!" << endl;
	return 0;
}