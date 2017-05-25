#include "conFreeGram.h"

conFreeGram::conFreeGram(string readL, string readR, int Num)
{
	Number = Num;
	/*修改这里写读左边*/
	left = readL;
	/*修改这里写读右边*/
	while (true)
	{
		int offset = readR.find_first_of('\t');//寻找首次出现的空格
		if (offset < 0) break;//找不到空格
		while (offset == 0)//首字符为空格，循环找到第一个不为空格的字符
		{
			readR = readR.substr(offset + 1, readR.length() - offset);
			offset = readR.find_first_of('\t');
		}
		if (offset == readR.length() - 1)//最后一个字符为空格
		{
			readR = readR.substr(0, readR.length() - 1);
			break;
		}
		else//找到第一个空格，将字符串以此空格为界限分开
		{
			string s = readR.substr(0, offset);
			if (s[0] != '\0'&&s[0]!='{')
			{
				right.push_back(s);
			}
			while (readR[offset] == '\t') offset++;
			readR = readR.substr(offset, readR.length() - offset);
		}
	}
	if (readR[0]!='\0'&&readR[0]!='{')//判断empty或者注释传入“”的情况
	{
		right.push_back(readR);
	}
}

string conFreeGram::getLeft()
{
	return left;
}

vector<string> conFreeGram::getRight()
{
	return right;
}

int conFreeGram::getNumber()
{
	return Number;
}

bool operator==(const conFreeGram &l, const conFreeGram &r)
{
	return l.Number==r.Number;
}

bool operator<(const conFreeGram &l, const conFreeGram &r)
{
	return  l.Number < r.Number;
}

bool operator>(const conFreeGram &l, const conFreeGram &r)
{
	return  l.Number > r.Number;
}

ostream & operator<<(ostream & out, const conFreeGram & con)
{
	// TODO: 在此处插入 return 语句
	out << con.left << " -> ";
	for (int i = 0; i < con.right.size(); i++)
		out << con.right[i]<<'\t';
	return out;
}
