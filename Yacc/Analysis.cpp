#include "Analysis.h"
#include <fstream>
#include<string>
ofstream ofile;

int Analysis::FindNextstate(int state, string expression)        //返回Goto表移进的下一个状态
{
	map<string, pair<int, int>>::iterator iter = ActGoto[state].begin();
	for (iter; iter != ActGoto[state].end(); iter++)
	{
		if (iter->first == expression)
		{
			return (iter->second).second;
		}
	}
	return -1;
}

int Analysis::istoken(string s)          //判断当前字符是终结符(返回1)还是非终结符(返回0)
{
	for (int i = 0; i<token.size(); i++)
	{
		if ( token[i]== s)
			return 1;
	}
	for (int i = 0; i<expression.size(); i++)
	{
		if (expression[i] == s)
			return 0;
	}
}

void Analysis::output()
{
	ofile.open(file, ios::out);              //将语法分析程序输出到file中
	ofile << "char* Analysis(vector<string> program)\n";
	ofile << "{\n";
	ofile << "\tstack<int> state;\n";
	ofile << "\tstate.push(0);\n";
	ofile << "\tstack<string> symbol;\n";
	ofile << "\tsymbol.push(\"#\");\n\n";
	ofile << "\tint popstate = 0;\n";
	ofile << "\tint flag = 1;\n";
	ofile << "\tint point = 0;\n";
	ofile << "\tstring str = \"\";\n\n";

	ofile << "\tstring str1 = \"#\";\n";
	ofile << "\tstring str2 = \"0\";\n";
	ofile << "\twhile (flag)\n";
	ofile << "\t{\n";
	ofile << "\t\tpopstate = state.top();\n";
	ofile << "\t\tstr = program[point];\n";
	ofile << "\t\tswitch(popstate)\n";
	ofile << "\t\t{\n";
	for (int i = 0; i < ActGoto.size(); i++)
	{
		ofile << "\t\tcase " << i << ":\n";
		ofile << "\t\t{\n";
		if (ActGoto[i].size() == 0)
		{
			ofile << "\t\t\treturn \"error\";\n";
		}
		else
		{
			map<string, pair<int, int>>::iterator iter = ActGoto[i].begin();
			for (iter; iter != ActGoto[i].end(); iter++)
			{
				if (((iter->second).first == 0)&&istoken(iter->first))           //表示移进
				{
					string A1 = (iter->first);
					ofile << "\t\t\tif (str == \"" << A1 << "\")\n";
					ofile << "\t\t\t{\n";
					ofile << "\t\t\t\tstate.push(" << (iter->second).second << ");\n";
					ofile << "\t\t\t\tsymbol.push(\"" << A1 << "\");\n";
					ofile << "\t\t\t\tstr1 += \" " << A1 << "\";\n";
					ofile << "\t\t\t\tstr2 += \" " << (iter->second).second << "\";\n";
					ofile << "\t\t\t\tcout<<\"Symbol Stack: \"<<str1<<endl<<\"State Stack : \"<<str2<<endl<<\"shift\"<<endl;\n";
					ofile << "\t\t\t\tpoint++;\n";
					ofile << "\t\t\t\tbreak;\n";
					ofile << "\t\t\t}\n";
				}
				if (((iter->second).first == 1) && istoken(iter->first))           //表示规约
				{
					string A2 = (iter->first);
					ofile << "\t\t\tif (str == \"" << A2 << "\")\n";
					ofile << "\t\t\t{\n";
					ofile << "\t\t\t\tint n = " << Tbl.get((iter->second).second).getRight().size() << ";\n";
					ofile << "\t\t\t\tfor(int i = 0;i < n;i++)\n";
					ofile << "\t\t\t\t{\n";
					ofile << "\t\t\t\t\tstring str11 = symbol.top();\n";
					ofile << "\t\t\t\t\tint str22 = state.top();\n";
					ofile << "\t\t\t\t\tstate.pop();\n";
					ofile << "\t\t\t\t\tsymbol.pop();\n";
					ofile << "\t\t\t\t\tstr1 = str1.substr(0,str1.length()-str11.length()-1);\n";
					ofile << "\t\t\t\t\tstr2 = str2.substr(0,str2.length()-len(str22)-1);\n";
					ofile << "\t\t\t\t}\n";
					string B = (Tbl.get((iter->second).second).getLeft());
					ofile << "\t\t\t\tsymbol.push(\"" << B<< "\");\n";
					ofile << "\t\t\t\tstr1 += \" " << B << "\";\n";
					ofile << "\t\t\t\tpopstate = state.top();\n";
					ofile << "\t\t\t\tif(nextstate(popstate,\"" << B << "\") != -1)\n";
					ofile << "\t\t\t\t{\n";
					ofile << "\t\t\t\t\tstate.push(nextstate(popstate,\"" << B << "\"));\n";
					ofile << "\t\t\t\t\tstr2 += \" \";\n";
					ofile << "\t\t\t\t\tstr2 += to_string(nextstate(popstate,\"" << B << "\"));\n";
					ofile << "\t\t\t\t\tcout<<\"Symbol Stack: \"<<str1<<endl<<\"State Stack : \"<<str2<<endl<<\"reduct：\"<<\"" << B<<"\"<<\"->\"<<\"";
					for (int k = 0; k < (Tbl.get((iter->second).second).getRight()).size(); k++)
					{
						ofile << (Tbl.get((iter->second).second).getRight())[k];
					}
					ofile << "\"<<endl;\n";
					ofile << "\t\t\t\t}\n";
					ofile << "\t\t\t\telse\n";
					ofile << "\t\t\t\t{\n";
					ofile << "\t\t\t\t\treturn \"error\";\n";
					ofile << "\t\t\t\t}\n";
					ofile << "\t\t\t\tbreak;\n";
					ofile << "\t\t\t}\n";
				}
				if (((iter->second).first == 2) && istoken(iter->first))              //表示正确
				{
					string A3 = (iter->first);
					ofile << "\t\t\tif (str == \"" << A3 << "\")\n";
					ofile << "\t\t\t{\n";
					ofile << "\t\t\t\tflag = 0;\n";

					ofile << "\t\t\t\tint n = " << Tbl.get((iter->second).second).getRight().size() << ";\n";
					ofile << "\t\t\t\tfor(int i = 0;i < n;i++)\n";
					ofile << "\t\t\t\t{\n";
					ofile << "\t\t\t\t\tstring str11 = symbol.top();\n";
					ofile << "\t\t\t\t\tint str22 = state.top();\n";
					ofile << "\t\t\t\t\tstate.pop();\n";
					ofile << "\t\t\t\t\tsymbol.pop();\n";
					ofile << "\t\t\t\t\tstr1 = str1.substr(0,str1.length()-str11.length()-1);\n";
					ofile << "\t\t\t\t\tstr2 = str2.substr(0,str2.length()-len(str22)-1);\n";
					ofile << "\t\t\t\t}\n";
					string C = (Tbl.get((iter->second).second).getLeft());
					ofile << "\t\t\t\tcout<<\"Symbol Stack: \"<<str1<<endl<<\"State Stack  : \"<<str2<<endl<<\"reduct：\"<<\"" << C << "\"<<\"->\"<<\"";
					for (int k = 0; k < (Tbl.get((iter->second).second).getRight()).size(); k++)
					{
						ofile << (Tbl.get((iter->second).second).getRight())[k];
					}
					ofile << "\"<<endl;\n";

					ofile << "\t\t\t\treturn \"success\";\n";
					ofile << "\t\t\t}\n";
				}
			}
			ofile << "\t\t\telse\n";
			ofile << "\t\t\t{\n";
			ofile << "\t\t\t\treturn \"error\";\n";
			ofile << "\t\t\t}\n";
		}
		ofile << "\t\t}\n";
	}
	ofile << "\t\t}\n";
	ofile << "\t}\n";
	ofile << "}\n\n";


	ofile << "int nextstate(int state,string expression)\n";                    //Goto表的移进
	ofile << "{\n";
	ofile << "\tswitch(state)\n";
	ofile << "\t{\n";
	for (int i = 0; i < ActGoto.size(); i++)
	{
		ofile << "\tcase " << i << ":\n";
		ofile << "\t{\n";
		map<string, pair<int, int>>::iterator iter = ActGoto[i].begin();
		for (iter; iter != ActGoto[i].end(); iter++)
		{
			if (((iter->second).first == 0) && !istoken(iter->first))           //表示移进
			{
				const char *A1 = (iter->first).c_str();
				ofile << "\t\tif ( expression == \"" << A1 << "\")\n";
				ofile << "\t\t{\n";
				if (FindNextstate(i, iter->first)>=0)
				{
					ofile << "\t\t\treturn " << FindNextstate(i, iter->first) << ";\n";
				}
				else
				{
					ofile << "\t\t\treturn -1;\n";
				}
				ofile << "\t\t}\n";
			}
		}
		ofile << "\t\treturn -1;\n";
		ofile << "\t}\n";
	}
	ofile << "\t}\n";
	ofile << "}\n";

	ofile.close();
}

