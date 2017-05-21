#include "LrTable.h"
using namespace std;
int main()
{
	vector<string> tokens;
	tokens.push_back("if");
	tokens.push_back("else");
	tokens.push_back("a");
	tokens.push_back(";");
	contextTb Tbl(tokens);
	Tbl.insert("program", "declarations");
	Tbl.insert("declarations", "if	declarations	else	declarations");
	Tbl.insert("declarations", "if	declarations");
	Tbl.insert("declarations", "declarations	;	declarations");
	Tbl.insert("declarations", "a");
	Tbl.updateFirstMap();
	LrTable A(Tbl);
	A.Output();
}