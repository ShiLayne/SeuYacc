#include "conFreeGram.h"

conFreeGram::conFreeGram(string readL, string readR,int Num)
{
	Number = Num;
	/*修改这里写读左边*/
	left = readL;

	/*修改这里写读右边*/
	int size = 0, start = 0;
	for (int i = 0; i < readR.length(); i++)
	{
		if (readR[i] == ' '|| readR[i] == '/0')
		{
			if(size!=0)
				right.push_back(readR.substr(start, size));
			size = 0;
			start = i + 1;
		}
		else
			size++;
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
