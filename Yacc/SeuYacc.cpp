#include "InputFileProcess.h"
#include "Analysis.h"
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

	Analysis B = Analysis(tbl.ActGoto_Tbl, tbl.getToken(),tbl.getExpr(), "yacc1.cpp", tbl.Tbl);
	B.output();
	return 0;
}