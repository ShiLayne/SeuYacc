#pragma
#include <vector>
#include <string>
using namespace std;
/*
	用于存储一行规约规则
*/
class conFreeGram
{
private:
	int Number;
	string left;
	vector<string> right;
public:
	conFreeGram(string readL, string readR,int Num);
	string getLeft();
	vector<string> getRight();
	bool operator==(const conFreeGram&);
	bool operator<(const conFreeGram&);
	bool operator>(const conFreeGram&);
};