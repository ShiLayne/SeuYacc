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
	string getLeft();										//获取左侧
	vector<string> getRight();						//获取右侧
	int getNumber();									//获取编号
	bool operator==(const conFreeGram&);
	bool operator<(const conFreeGram&);
	bool operator>(const conFreeGram&);
};