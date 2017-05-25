#include "InputFileProcess.h"
#include "conFreeGram.h"
#include "contextTb.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void InputFileProcess::OpenInOutFile()//打开输入输出文件
{
	ifile.open(InputFileName, ios::in);
	ofile.open(OutputFileName, ios::out);
	if (!ifile) {//输入文件不能打开
		cerr << "Input file could not be opened" << endl;
		exit(1);
	}
	if (!ofile) {//输入文件不能打开
		cerr << "Output file could not be opened" << endl;
		exit(1);
	}
}

int InputFileProcess::check(char ch)//检测当前位于‘%’后的符号来决定状态编号
{
	if (ch == '{') {//是‘{’，表示BEGIN
		return BEGIN;
	}
	else if (ch == '}') {//是‘%}’，表示END
		return END;
	}
	else if (ch == '%') {//是‘%’，表示层次
		return LAYER;
	}
	else //以上三个符号均都不是
	{
		ifile.seekg(-1, ios::cur);//将文件的读指针倒退一个
	}
}

void InputFileProcess::DefinitionOutput(char &ch)//说明部分内容解析函数
{
	cout << "说明部分输出开始!" << endl;
	//首先把辅助定义部分输入到文件中
	ch = ifile.get();//读输入文件的下一个字符
	if (ch != '%') {//输入文件首字符不是‘%’符号，则显示输入文件的格式不正确
		cerr << "Input File don't have the correct format!" << endl;
		state = ERROR;//状态为ERROR，即为-1
		exit(1);//退出当前main函数
	}
	else {//输入文件首字符为‘%’
		ch = ifile.get();//读取输入文件的下一个字符
		state = check(ch);//根据当前读取的字符来决定state
		if (state != 1) {//如果state不表示BEGIN
			cerr << "Input File don't have the correct format!" << endl;
			state = ERROR;//状态为ERROR，即为-1
			exit(1);//退出当前main函数
		}
		else;
	}
	while (!ifile.eof() && state != 2) {//输入文件没有读到结尾并且state不等于2，即为不为END状态（%}）
		ch = ifile.get();//读取输入文件的下一个字符
		if (ch == '%') {//当前读入的字符为‘%’
			char nextch = ifile.get();//读取输入文件的下一个字符
			state = check(nextch);//根据当前读取的字符来决定state
		}
		else ofile.put(ch);//将读取的字符存入输出文件中
	}
	string line;
	int offset;
	int level = 0;
	int priority = 0;
	getline(ifile, line);
	while (line != "%%")
	{
		if (line.length() == 0)
		{
			line.clear();
			getline(ifile, line);
		}
		else
		{
			if (line[0] == '%')
			{
				if (line[1] == 'u')//处理互斥体部分
				{
					for (int i = 1; i < line.length(); i++)
					{
						ofile.put(line[i]);
					}
					line.clear();
					getline(ifile, line);
				}
				else if (line[1] == 't'&&line[2] == 'o')//处理token部分
				{//处理‘%token’的情形
					string str;
					str.clear();
					for (int i = 7; i < line.length(); i++)
					{

						if (line[i] == ' ')
						{
							tokenTb.push_back(str);
							str.clear();
						}
						else if (i == line.length() - 1)
						{
							str.append(1, line[i]);
							tokenTb.push_back(str);
						}
						else
						{
							str.append(1, line[i]);
						}
					}
					line.clear();
					getline(ifile, line);
				}
				else if (line[1] == 't'&&line[2] == 'y')//处理type部分
				{//处理‘%type’的情形
					string str, temp;
					str = line.substr(6, line.length() - 6);
					string typevar;
					offset = str.find_first_of('\t');//寻找首次出现的空格
					typevar = str.substr(1, offset - 2);
					while (str[offset] == '\t') offset++;
					temp = str.substr(offset, str.length() - offset);
					str = temp;
					while (true)
					{
						offset = str.find_first_of(" ", 1);//寻找首次出现的空格
						if (offset < 0) break;
						if (offset == str.length() - 1)
						{
							str = str.substr(0, str.length() - 1);
							break;
						}
						else
						{
							paraTb.push_back(pair<string, string>(str.substr(0, offset), typevar));
							temp = str.substr(offset + 1, str.length() - offset);
							str = temp;
						}
					}
					paraTb.push_back(pair<string, string>(str, typevar));
					typevar.clear();
					str.clear();
					line.clear();
					getline(ifile, line);
				}
				else if (line[1] == 'n')//处理无结合性的运算符nonassoc
				{
					offset = line.find_first_of('\t');//寻找首次出现的空格
					while (line[offset] == ' ') offset++;
					nonassocTb.insert(pair<string, int>(line.substr(offset + 1, line.length() - offset),level));
					level++;
					offset = 0;
					line.clear();
					getline(ifile, line);
				}
				else if (line[1] == 'l')//处理左结合性的运算符left部分
				{
					offset = line.find_first_of('\t');//寻找首次出现的空格
					while (line[offset] == '\t') offset++;
					string op, temp;
					op = line.substr(offset, line.length() - offset);
					while (true)
					{
						offset = op.find_first_of('\t');//寻找首次出现的空格
						if (offset < 0) break;
						if (offset == op.length() - 1)
						{
							op = op.substr(0, op.length() - 1);
							break;
						}
						else
						{
							temp = op.substr(0, offset);
							leftTb.insert(pair<string, int>(temp, priority));
							while (line[offset] == ' ') offset++;
							op = op.substr(offset + 1, op.length() - offset);
						}
					}
					leftTb.insert(pair<string, int>(op, priority));
					priority++;
					offset = 0;
					temp.clear();
					op.clear();
					line.clear();
					getline(ifile, line);
				}
				else//‘%’后面不是定义的字符就直接输出到输出文件中去
				{
					for (int i = 0; i < line.length(); i++)
					{
						ofile.put(line[i]);
					}
					ofile.put('\n');
					line.clear();
					getline(ifile, line);
				}
			}
			else//第一个字符不是‘%’，直接输出到输出文件中
			{
				for (int j = 0; j < line.length(); j++)
				{
					ofile.put(line[j]);
				}
				ofile.put('\n');
				line.clear();
				getline(ifile, line);
			}
		}
	}
	cout << "说明部分输出完毕!" << endl;
}

int InputFileProcess::StringCountCh(string &str, char ch)//计算字符串str中字符ch出现的个数
{
	int count = 0;
	for (int n = 0; n < str.length(); n++)
	{
		if (str[n] == ch)
			count++;
	}
	return count;
}

contextTb InputFileProcess::RuleProcess()//规则处理部分处理函数
{
	cout << "规则处理部分开始!" << endl;
	contextTb conTb(tokenTb);
	string rule, temp, left, t;
	int offset;
	getline(ifile, rule);
	while (rule != "%%")
	{
		if (rule.find_first_of(':') == (rule.length() - 1))//扫描到有冒号的一行
		{
			//此时temp值为每一个规则
			offset = temp.find_first_of(':') - 1;
			int i = temp.find_first_of(':') + 1;
			while (temp[offset] == '\t') offset--;
			while (temp[i] == '\t') i++;
			left = temp.substr(0, offset + 1);//left为冒号左边的内容
			temp = temp.substr(i, temp.length() - 1 - i);
			int turn = StringCountCh(temp, '|');
			while (turn)
			{
				offset = temp.find_first_of('|') - 1;
				i = temp.find_first_of('|') + 1;
				while (temp[offset] == '\t') offset--;
				while (temp[i] == '\t') i++;
				t = temp.substr(0, offset + 1);//t为temp当前第一个‘|’符号前面的字符串
				temp = temp.substr(i, temp.length() - 1 - i);//新temp为旧temp当前第一个‘|’符号后面的字符串
			    //处理t
				conTb.insert(left, t);
				turn--;//‘|’数量-1
				t.clear();
			}
			//此时处理最后一个竖线后面的内容
			offset = temp.length() - 1;
			while (temp[offset] == ';' || temp[offset] == '\t') offset--;
			temp = temp.substr(0, offset + 1);
			if (temp[0] == '/'&&temp[1]=='*')
			{
				temp.clear();
				temp.append("", 1);
			}
			conTb.insert(left, temp);
			temp.clear();
			left.clear();
			t.clear();
			temp += rule;
		}
		else
		{
			temp += rule;
		}
		getline(ifile, rule);
	}
	//这时候temp的值为规则部分的最后一个规则
	offset = temp.find_first_of(':') - 1;
	int i = temp.find_first_of(':') + 1;
	while (temp[offset] == '\t') offset--;
	while (temp[i] == '\t') i++;
	left = temp.substr(0, offset + 1);//left为冒号左边的内容
	temp = temp.substr(i, temp.length() - 1 - i);
	int turn = StringCountCh(temp, '|');
	while (turn)
	{
		offset = temp.find_first_of('|') - 1;
		i = temp.find_first_of('|') + 1;
		while (temp[offset] == '\t') offset--;
		while (temp[i] == '\t') i++;
		t = temp.substr(0, offset + 1);
		temp = temp.substr(i, temp.length() - 1 - i);
		//处理t
		conTb.insert(left, t);
		turn--;
		t.clear();
	}
	//此时处理最后一个竖线后面的内容
	offset = temp.length() - 1;
	while (temp[offset] == ';' || temp[offset] == '\t') offset--;
	temp = temp.substr(0, offset + 1);
	conTb.insert(left, temp);
	t.clear();
	temp.clear();
	left.clear();
	t.clear();
	cout << "规则处理部分结束!" << endl;
	return conTb;
}

void InputFileProcess::UserProOutput(char &ch)//用户子程序内容输出函数
{
	cout << "用户子程序部分输出开始!" << endl;
	//下面读入用户子程序部分内容
	while (!ifile.eof())//当文件读入未结束时
	{
		ch = ifile.get();//读取字符
		ofile.put(ch);//将读取的字符放入输出文件中
	}
	cout << "用户子程序部分输出结束!" << endl;
}