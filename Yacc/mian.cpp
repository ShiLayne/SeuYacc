#include "LrTable.h"
#include <iostream>
using namespace std;
int main()
{
	vector<string> tokens;
	tokens.push_back("a");
	tokens.push_back("b");
	tokens.push_back("+");
	tokens.push_back("c");
	contextTb Tbl(tokens);
	Tbl.insert("S'", "S + c");
	Tbl.insert("S'", "a + c");
	Tbl.insert("S", "b + c");
	Tbl.updateFirstMap();
}