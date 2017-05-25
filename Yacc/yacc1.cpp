char* Analysis(vector<string> program)
{
	stack<int> state;
	state.push(0);
	stack<string> symbol;
	symbol.push("#");

	int popstate = 0;
	int flag = 1;
	int point = 0;
	string str = "";

	string str1 = "#";
	string str2 = "0";
	while (flag)
	{
		popstate = state.top();
		str = program[point];
		switch(popstate)
		{
		case 0:
		{
			if (str == "$")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declarations");
				str1 += " declarations";
				popstate = state.top();
				if(nextstate(popstate,"declarations") != -1)
				{
					state.push(nextstate(popstate,"declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 1:
		{
			if (str == "$")
			{
				flag = 0;
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack  : "<<str2<<endl<<"reduct£º"<<"program"<<"->"<<"declarations"<<endl;
				return "success";
			}
			else
			{
				return "error";
			}
		}
		case 2:
		{
			if (str == "$")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declarations");
				str1 += " declarations";
				popstate = state.top();
				if(nextstate(popstate,"declarations") != -1)
				{
					state.push(nextstate(popstate,"declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 3:
		{
			if (str == "")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"fun_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "$")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"fun_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"fun_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"fun_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"fun_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 4:
		{
			if (str == "")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"var_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "$")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"var_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"var_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"var_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declaration");
				str1 += " declaration";
				popstate = state.top();
				if(nextstate(popstate,"declaration") != -1)
				{
					state.push(nextstate(popstate,"declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declaration"<<"->"<<"var_declaration"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 5:
		{
			if (str == "NAME")
			{
				state.push(10);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 10";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(11);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 11";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 6:
		{
			if (str == "NAME")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"INT"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"INT"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 7:
		{
			if (str == "NAME")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"FLOAT"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"FLOAT"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 8:
		{
			if (str == "LBRACE")
			{
				state.push(12);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 12";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 9:
		{
			if (str == "$")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("declarations");
				str1 += " declarations";
				popstate = state.top();
				if(nextstate(popstate,"declarations") != -1)
				{
					state.push(nextstate(popstate,"declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"declarations"<<"->"<<"declarationdeclarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 10:
		{
			if (str == "LPAR")
			{
				state.push(13);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 13";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "SEMICOLON")
			{
				state.push(14);
				symbol.push("SEMICOLON");
				str1 += " SEMICOLON";
				str2 += " 14";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 11:
		{
			if (str == "NAME")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"typeTIMES"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"typeTIMES"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 12:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fields");
				str1 += " fields";
				popstate = state.top();
				if(nextstate(popstate,"fields") != -1)
				{
					state.push(nextstate(popstate,"fields"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fields"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fields"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 13:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("parameters");
				str1 += " parameters";
				popstate = state.top();
				if(nextstate(popstate,"parameters") != -1)
				{
					state.push(nextstate(popstate,"parameters"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"parameters"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"parameters"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 14:
		{
			if (str == "")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "$")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 15:
		{
			if (str == "NAME")
			{
				state.push(22);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 22";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(11);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 11";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 16:
		{
			if (str == "RBRACE")
			{
				state.push(23);
				symbol.push("RBRACE");
				str1 += " RBRACE";
				str2 += " 23";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 17:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fields");
				str1 += " fields";
				popstate = state.top();
				if(nextstate(popstate,"fields") != -1)
				{
					state.push(nextstate(popstate,"fields"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fields"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fields"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 18:
		{
			if (str == "RPAR")
			{
				state.push(25);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 25";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 19:
		{
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("parameters");
				str1 += " parameters";
				popstate = state.top();
				if(nextstate(popstate,"parameters") != -1)
				{
					state.push(nextstate(popstate,"parameters"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"parameters"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"parameters"<<"->"<<"more_parameters"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 20:
		{
			if (str == "COMMA")
			{
				state.push(26);
				symbol.push("COMMA");
				str1 += " COMMA";
				str2 += " 26";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("more_parameters");
				str1 += " more_parameters";
				popstate = state.top();
				if(nextstate(popstate,"more_parameters") != -1)
				{
					state.push(nextstate(popstate,"more_parameters"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"more_parameters"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"more_parameters"<<"->"<<"parameter"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 21:
		{
			if (str == "NAME")
			{
				state.push(27);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 27";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(11);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 11";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 22:
		{
			if (str == "SEMICOLON")
			{
				state.push(28);
				symbol.push("SEMICOLON");
				str1 += " SEMICOLON";
				str2 += " 28";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 23:
		{
			if (str == "NAME")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"STRUCTLBRACEfieldsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("type");
				str1 += " type";
				popstate = state.top();
				if(nextstate(popstate,"type") != -1)
				{
					state.push(nextstate(popstate,"type"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"type"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"type"<<"->"<<"STRUCTLBRACEfieldsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 24:
		{
			if (str == "RBRACE")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fields");
				str1 += " fields";
				popstate = state.top();
				if(nextstate(popstate,"fields") != -1)
				{
					state.push(nextstate(popstate,"fields"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fields"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fields"<<"->"<<"fieldfields"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 25:
		{
			if (str == "LBRACE")
			{
				state.push(30);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 30";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 26:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 27:
		{
			if (str == "COMMA")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("parameter");
				str1 += " parameter";
				popstate = state.top();
				if(nextstate(popstate,"parameter") != -1)
				{
					state.push(nextstate(popstate,"parameter"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"parameter"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"parameter"<<"->"<<"typeNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("parameter");
				str1 += " parameter";
				popstate = state.top();
				if(nextstate(popstate,"parameter") != -1)
				{
					state.push(nextstate(popstate,"parameter"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"parameter"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"parameter"<<"->"<<"typeNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 28:
		{
			if (str == "")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("field");
				str1 += " field";
				popstate = state.top();
				if(nextstate(popstate,"field") != -1)
				{
					state.push(nextstate(popstate,"field"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"field"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"field"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("field");
				str1 += " field";
				popstate = state.top();
				if(nextstate(popstate,"field") != -1)
				{
					state.push(nextstate(popstate,"field"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"field"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"field"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("field");
				str1 += " field";
				popstate = state.top();
				if(nextstate(popstate,"field") != -1)
				{
					state.push(nextstate(popstate,"field"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"field"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"field"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("field");
				str1 += " field";
				popstate = state.top();
				if(nextstate(popstate,"field") != -1)
				{
					state.push(nextstate(popstate,"field"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"field"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"field"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("field");
				str1 += " field";
				popstate = state.top();
				if(nextstate(popstate,"field") != -1)
				{
					state.push(nextstate(popstate,"field"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"field"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"field"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 29:
		{
			if (str == "")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fun_declaration");
				str1 += " fun_declaration";
				popstate = state.top();
				if(nextstate(popstate,"fun_declaration") != -1)
				{
					state.push(nextstate(popstate,"fun_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fun_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fun_declaration"<<"->"<<"typeNAMELPARparametersRPARblock"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "$")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fun_declaration");
				str1 += " fun_declaration";
				popstate = state.top();
				if(nextstate(popstate,"fun_declaration") != -1)
				{
					state.push(nextstate(popstate,"fun_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fun_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fun_declaration"<<"->"<<"typeNAMELPARparametersRPARblock"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fun_declaration");
				str1 += " fun_declaration";
				popstate = state.top();
				if(nextstate(popstate,"fun_declaration") != -1)
				{
					state.push(nextstate(popstate,"fun_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fun_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fun_declaration"<<"->"<<"typeNAMELPARparametersRPARblock"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fun_declaration");
				str1 += " fun_declaration";
				popstate = state.top();
				if(nextstate(popstate,"fun_declaration") != -1)
				{
					state.push(nextstate(popstate,"fun_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fun_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fun_declaration"<<"->"<<"typeNAMELPARparametersRPARblock"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("fun_declaration");
				str1 += " fun_declaration";
				popstate = state.top();
				if(nextstate(popstate,"fun_declaration") != -1)
				{
					state.push(nextstate(popstate,"fun_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"fun_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"fun_declaration"<<"->"<<"typeNAMELPARparametersRPARblock"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 30:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "IF")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 31:
		{
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("more_parameters");
				str1 += " more_parameters";
				popstate = state.top();
				if(nextstate(popstate,"more_parameters") != -1)
				{
					state.push(nextstate(popstate,"more_parameters"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"more_parameters"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"more_parameters"<<"->"<<"parameterCOMMAmore_parameters"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 32:
		{
			if (str == "IF")
			{
				state.push(38);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 38";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(36);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 36";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statements");
				str1 += " statements";
				popstate = state.top();
				if(nextstate(popstate,"statements") != -1)
				{
					state.push(nextstate(popstate,"statements"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statements"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statements"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				state.push(40);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 40";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 33:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "IF")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 34:
		{
			if (str == "NAME")
			{
				state.push(45);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 45";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(11);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 11";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 35:
		{
			if (str == "RBRACE")
			{
				state.push(46);
				symbol.push("RBRACE");
				str1 += " RBRACE";
				str2 += " 46";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 36:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "IF")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 37:
		{
			if (str == "SEMICOLON")
			{
				state.push(48);
				symbol.push("SEMICOLON");
				str1 += " SEMICOLON";
				str2 += " 48";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 38:
		{
			if (str == "LPAR")
			{
				state.push(49);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 49";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 39:
		{
			if (str == "ASSIGN")
			{
				state.push(50);
				symbol.push("ASSIGN");
				str1 += " ASSIGN";
				str2 += " 50";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(52);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 52";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(51);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 51";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 40:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 41:
		{
			if (str == "SEMICOLON")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"block"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 42:
		{
			if (str == "ASSIGN")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 43:
		{
			if (str == "ASSIGN")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 44:
		{
			if (str == "IF")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<"var_declarationvar_declarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACE")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<"var_declarationvar_declarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<"var_declarationvar_declarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<"var_declarationvar_declarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<"var_declarationvar_declarations"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 45:
		{
			if (str == "SEMICOLON")
			{
				state.push(59);
				symbol.push("SEMICOLON");
				str1 += " SEMICOLON";
				str2 += " 59";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 46:
		{
			if (str == "")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "$")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 47:
		{
			if (str == "IF")
			{
				state.push(38);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 38";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(36);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 36";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statements");
				str1 += " statements";
				popstate = state.top();
				if(nextstate(popstate,"statements") != -1)
				{
					state.push(nextstate(popstate,"statements"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statements"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statements"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				state.push(40);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 40";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 48:
		{
			if (str == "IF")
			{
				state.push(38);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 38";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(36);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 36";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statements");
				str1 += " statements";
				popstate = state.top();
				if(nextstate(popstate,"statements") != -1)
				{
					state.push(nextstate(popstate,"statements"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statements"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statements"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				state.push(40);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 40";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 49:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 50:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 51:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 52:
		{
			if (str == "NAME")
			{
				state.push(75);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 75";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 53:
		{
			if (str == "DIVIDE")
			{
				state.push(81);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 81";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(76);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 76";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(82);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 82";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(77);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 77";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(79);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 79";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(78);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 78";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"RETURNexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				state.push(80);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 80";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 54:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(84);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 84";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 55:
		{
			if (str == "exp ")
			{
				state.push(85);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 85";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 56:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 57:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 58:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(86);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 86";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 59:
		{
			if (str == "")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "FLOAT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "IF")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declaration");
				str1 += " var_declaration";
				popstate = state.top();
				if(nextstate(popstate,"var_declaration") != -1)
				{
					state.push(nextstate(popstate,"var_declaration"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declaration"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declaration"<<"->"<<"typeNAMESEMICOLON"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 60:
		{
			if (str == "RBRACE")
			{
				state.push(87);
				symbol.push("RBRACE");
				str1 += " RBRACE";
				str2 += " 87";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 61:
		{
			if (str == "RBRACE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statements");
				str1 += " statements";
				popstate = state.top();
				if(nextstate(popstate,"statements") != -1)
				{
					state.push(nextstate(popstate,"statements"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statements"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statements"<<"->"<<"statementSEMICOLONstatements"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 62:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(88);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 88";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 63:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(84);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 84";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 64:
		{
			if (str == "exp ")
			{
				state.push(97);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 97";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 65:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 66:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 67:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(98);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 98";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 68:
		{
			if (str == "DIVIDE")
			{
				state.push(81);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 81";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(76);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 76";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(82);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 82";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(77);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 77";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(79);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 79";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(78);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 78";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"lexpASSIGNexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				state.push(80);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 80";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 69:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(99);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 99";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 70:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(84);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 84";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 71:
		{
			if (str == "exp ")
			{
				state.push(108);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 108";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 72:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 73:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 74:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(109);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 109";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 75:
		{
			if (str == "ASSIGN")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 76:
		{
			if (str == "NAME")
			{
				state.push(110);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 110";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 77:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(112);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 112";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 78:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 79:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 80:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 81:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 82:
		{
			if (str == "LPAR")
			{
				state.push(54);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 54";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(55);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 55";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(58);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 58";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(57);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 57";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 83:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(118);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 118";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 84:
		{
			if (str == "LPAR")
			{
				state.push(98);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 98";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 85:
		{
			if (str == "%prec UMINUS")
			{
				state.push(119);
				symbol.push("%prec UMINUS");
				str1 += " %prec UMINUS";
				str2 += " 119";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 86:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(125);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 125";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 87:
		{
			if (str == "SEMICOLON")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 88:
		{
			if (str == "IF")
			{
				state.push(131);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 131";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(129);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 129";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RETURN")
			{
				state.push(133);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 133";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 89:
		{
			if (str == "NAME")
			{
				state.push(135);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 135";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 90:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(112);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 112";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 91:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 92:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 93:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 94:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 95:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 96:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(142);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 142";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 97:
		{
			if (str == "%prec UMINUS")
			{
				state.push(143);
				symbol.push("%prec UMINUS");
				str1 += " %prec UMINUS";
				str2 += " 143";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 98:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(144);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 144";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 99:
		{
			if (str == "ASSIGN")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("lexp");
				str1 += " lexp";
				popstate = state.top();
				if(nextstate(popstate,"lexp") != -1)
				{
					state.push(nextstate(popstate,"lexp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"lexp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"lexp"<<"->"<<"lexpLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 100:
		{
			if (str == "NAME")
			{
				state.push(146);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 146";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 101:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(112);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 112";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 102:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 103:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 104:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 105:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 106:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(74);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 74";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 107:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(153);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 153";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 108:
		{
			if (str == "%prec UMINUS")
			{
				state.push(154);
				symbol.push("%prec UMINUS");
				str1 += " %prec UMINUS";
				str2 += " 154";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 109:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(155);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 155";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 110:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 111:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(157);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 157";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 112:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(109);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 109";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 113:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 114:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 115:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 116:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 117:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 118:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 119:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 120:
		{
			if (str == "COMMA")
			{
				state.push(165);
				symbol.push("COMMA");
				str1 += " COMMA";
				str2 += " 165";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DIVIDE")
			{
				state.push(163);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 163";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(158);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 158";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(164);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 164";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(159);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 159";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(161);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 161";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(160);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 160";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(162);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 162";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 121:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(84);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 84";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 122:
		{
			if (str == "exp ")
			{
				state.push(167);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 167";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 123:
		{
			if (str == "COMMA")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 124:
		{
			if (str == "COMMA")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 125:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 126:
		{
			if (str == "COMMA")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(168);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 168";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 127:
		{
			if (str == "RPAR")
			{
				state.push(169);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 169";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 128:
		{
			if (str == "RPAR")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exps");
				str1 += " exps";
				popstate = state.top();
				if(nextstate(popstate,"exps") != -1)
				{
					state.push(nextstate(popstate,"exps"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exps"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exps"<<"->"<<"exp "<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 129:
		{
			if (str == "FLOAT")
			{
				state.push(7);
				symbol.push("FLOAT");
				str1 += " FLOAT";
				str2 += " 7";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "IF")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "INT")
			{
				state.push(6);
				symbol.push("INT");
				str1 += " INT";
				str2 += " 6";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "NAME")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var_declarations");
				str1 += " var_declarations";
				popstate = state.top();
				if(nextstate(popstate,"var_declarations") != -1)
				{
					state.push(nextstate(popstate,"var_declarations"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var_declarations"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var_declarations"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "STRUCT")
			{
				state.push(8);
				symbol.push("STRUCT");
				str1 += " STRUCT";
				str2 += " 8";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 130:
		{
			if (str == "%prec LOW")
			{
				state.push(171);
				symbol.push("%prec LOW");
				str1 += " %prec LOW";
				str2 += " 171";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "ELSE")
			{
				state.push(172);
				symbol.push("ELSE");
				str1 += " ELSE";
				str2 += " 172";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 131:
		{
			if (str == "LPAR")
			{
				state.push(173);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 173";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 132:
		{
			if (str == "ASSIGN")
			{
				state.push(174);
				symbol.push("ASSIGN");
				str1 += " ASSIGN";
				str2 += " 174";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(52);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 52";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(51);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 51";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 133:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 134:
		{
			if (str == "ELSE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"block"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 135:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 136:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(181);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 181";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 137:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 138:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 139:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 140:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 141:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 142:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 143:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 144:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 145:
		{
			if (str == "RPAR")
			{
				state.push(182);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 182";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 146:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 147:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(183);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 183";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 148:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 149:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 150:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 151:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 152:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 153:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 154:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 155:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 156:
		{
			if (str == "RPAR")
			{
				state.push(184);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 184";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 157:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 158:
		{
			if (str == "NAME")
			{
				state.push(185);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 185";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 159:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(112);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 112";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 160:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 161:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 162:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 163:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 164:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 165:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 166:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(193);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 193";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 167:
		{
			if (str == "%prec UMINUS")
			{
				state.push(194);
				symbol.push("%prec UMINUS");
				str1 += " %prec UMINUS";
				str2 += " 194";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 168:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(195);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 195";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 169:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "SEMICOLON")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 170:
		{
			if (str == "IF")
			{
				state.push(38);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 38";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(36);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 36";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACE")
			{
				int n = 0;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statements");
				str1 += " statements";
				popstate = state.top();
				if(nextstate(popstate,"statements") != -1)
				{
					state.push(nextstate(popstate,"statements"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statements"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statements"<<"->"<<""<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RETURN")
			{
				state.push(40);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 40";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 171:
		{
			if (str == "SEMICOLON")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"IFLPARexpRPARstatement%prec LOW"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 172:
		{
			if (str == "IF")
			{
				state.push(38);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 38";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(36);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 36";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RETURN")
			{
				state.push(40);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 40";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 173:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(67);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 67";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 174:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 175:
		{
			if (str == "DIVIDE")
			{
				state.push(206);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 206";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(201);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 201";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "ELSE")
			{
				int n = 2;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"RETURNexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				state.push(207);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 207";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(202);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 202";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(204);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 204";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(203);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 203";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(205);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 205";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 176:
		{
			if (str == "LPAR")
			{
				state.push(63);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 63";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(64);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 64";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(84);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 84";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(66);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 66";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 177:
		{
			if (str == "exp ")
			{
				state.push(209);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 209";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 178:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"var"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 179:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NUMBER"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 180:
		{
			if (str == "DIVIDE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LPAR")
			{
				state.push(210);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 210";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 1;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("var");
				str1 += " var";
				popstate = state.top();
				if(nextstate(popstate,"var") != -1)
				{
					state.push(nextstate(popstate,"var"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"var"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"var"<<"->"<<"NAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 181:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 182:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RPAR")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 183:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 184:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "RBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 185:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 186:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(211);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 211";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 187:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 188:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 189:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 190:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 191:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 192:
		{
			if (str == "RPAR")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exps");
				str1 += " exps";
				popstate = state.top();
				if(nextstate(popstate,"exps") != -1)
				{
					state.push(nextstate(popstate,"exps"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exps"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exps"<<"->"<<"expCOMMAexps"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 193:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 194:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 195:
		{
			if (str == "COMMA")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 196:
		{
			if (str == "RPAR")
			{
				state.push(212);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 212";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 197:
		{
			if (str == "RBRACE")
			{
				state.push(213);
				symbol.push("RBRACE");
				str1 += " RBRACE";
				str2 += " 213";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 198:
		{
			if (str == "SEMICOLON")
			{
				int n = 7;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"IFLPARexpRPARstatementELSEstatement"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 199:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(214);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 214";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 200:
		{
			if (str == "DIVIDE")
			{
				state.push(206);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 206";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(201);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 201";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"lexpASSIGNexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				state.push(207);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 207";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(202);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 202";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(204);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 204";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(203);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 203";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(205);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 205";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 201:
		{
			if (str == "NAME")
			{
				state.push(215);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 215";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 202:
		{
			if (str == "LPAR")
			{
				state.push(70);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 70";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(71);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 71";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(112);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 112";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(73);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 73";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 203:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 204:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 205:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 206:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 207:
		{
			if (str == "LPAR")
			{
				state.push(176);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 176";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(177);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 177";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(180);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 180";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(179);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 179";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 208:
		{
			if (str == "DIVIDE")
			{
				state.push(94);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 94";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(89);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 89";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(95);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 95";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(90);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 90";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(92);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 92";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(91);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 91";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(222);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 222";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(93);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 93";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 209:
		{
			if (str == "%prec UMINUS")
			{
				state.push(223);
				symbol.push("%prec UMINUS");
				str1 += " %prec UMINUS";
				str2 += " 223";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 210:
		{
			if (str == "LPAR")
			{
				state.push(121);
				symbol.push("LPAR");
				str1 += " LPAR";
				str2 += " 121";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(122);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 122";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(126);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 126";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NUMBER")
			{
				state.push(124);
				symbol.push("NUMBER");
				str1 += " NUMBER";
				str2 += " 124";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RPAR")
			{
				state.push(224);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 224";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "exp ")
			{
				state.push(128);
				symbol.push("exp ");
				str1 += " exp ";
				str2 += " 128";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 211:
		{
			if (str == "COMMA")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 212:
		{
			if (str == "COMMA")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 213:
		{
			if (str == "ELSE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("block");
				str1 += " block";
				popstate = state.top();
				if(nextstate(popstate,"block") != -1)
				{
					state.push(nextstate(popstate,"block"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"block"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"block"<<"->"<<"LBRACEvar_declarationsstatementsRBRACE"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 214:
		{
			if (str == "IF")
			{
				state.push(131);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 131";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(129);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 129";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RETURN")
			{
				state.push(133);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 133";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 215:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDOTNAME"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 216:
		{
			if (str == "DIVIDE")
			{
				state.push(105);
				symbol.push("DIVIDE");
				str1 += " DIVIDE";
				str2 += " 105";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "DOT")
			{
				state.push(100);
				symbol.push("DOT");
				str1 += " DOT";
				str2 += " 100";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "EQUAL")
			{
				state.push(106);
				symbol.push("EQUAL");
				str1 += " EQUAL";
				str2 += " 106";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACK")
			{
				state.push(101);
				symbol.push("LBRACK");
				str1 += " LBRACK";
				str2 += " 101";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "MINUS")
			{
				state.push(103);
				symbol.push("MINUS");
				str1 += " MINUS";
				str2 += " 103";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "PLUS")
			{
				state.push(102);
				symbol.push("PLUS");
				str1 += " PLUS";
				str2 += " 102";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RBRACK")
			{
				state.push(227);
				symbol.push("RBRACK");
				str1 += " RBRACK";
				str2 += " 227";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "TIMES")
			{
				state.push(104);
				symbol.push("TIMES");
				str1 += " TIMES";
				str2 += " 104";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 217:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expPLUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 218:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expMINUSexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 219:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expTIMESexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 220:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expDIVIDEexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 221:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expEQUALexp"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 222:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"LPARexpRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 223:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"MINUSexp %prec UMINUS"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 224:
		{
			if (str == "DIVIDE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 3;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 225:
		{
			if (str == "RPAR")
			{
				state.push(228);
				symbol.push("RPAR");
				str1 += " RPAR";
				str2 += " 228";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 226:
		{
			if (str == "%prec LOW")
			{
				state.push(229);
				symbol.push("%prec LOW");
				str1 += " %prec LOW";
				str2 += " 229";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "ELSE")
			{
				state.push(230);
				symbol.push("ELSE");
				str1 += " ELSE";
				str2 += " 230";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 227:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"expLBRACKexpRBRACK"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 228:
		{
			if (str == "DIVIDE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "DOT")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "ELSE")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "EQUAL")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "LBRACK")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "MINUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "PLUS")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			if (str == "TIMES")
			{
				int n = 4;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("exp");
				str1 += " exp";
				popstate = state.top();
				if(nextstate(popstate,"exp") != -1)
				{
					state.push(nextstate(popstate,"exp"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"exp"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"exp"<<"->"<<"NAMELPARexpsRPAR"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 229:
		{
			if (str == "ELSE")
			{
				int n = 6;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"IFLPARexpRPARstatement%prec LOW"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		case 230:
		{
			if (str == "IF")
			{
				state.push(131);
				symbol.push("IF");
				str1 += " IF";
				str2 += " 131";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "LBRACE")
			{
				state.push(129);
				symbol.push("LBRACE");
				str1 += " LBRACE";
				str2 += " 129";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "NAME")
			{
				state.push(43);
				symbol.push("NAME");
				str1 += " NAME";
				str2 += " 43";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			if (str == "RETURN")
			{
				state.push(133);
				symbol.push("RETURN");
				str1 += " RETURN";
				str2 += " 133";
				cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"shift"<<endl;
				point++;
				break;
			}
			else
			{
				return "error";
			}
		}
		case 231:
		{
			if (str == "ELSE")
			{
				int n = 7;
				for(int i = 0;i < n;i++)
				{
					string str11 = symbol.top();
					int str22 = state.top();
					state.pop();
					symbol.pop();
					str1 = str1.substr(0,str1.length()-str11.length()-1);
					str2 = str2.substr(0,str2.length()-len(str22)-1);
				}
				symbol.push("statement");
				str1 += " statement";
				popstate = state.top();
				if(nextstate(popstate,"statement") != -1)
				{
					state.push(nextstate(popstate,"statement"));
					str2 += " ";
					str2 += to_string(nextstate(popstate,"statement"));
					cout<<"Symbol Stack: "<<str1<<endl<<"State Stack : "<<str2<<endl<<"reduct£º"<<"statement"<<"->"<<"IFLPARexpRPARstatementELSEstatement"<<endl;
				}
				else
				{
					return "error";
				}
				break;
			}
			else
			{
				return "error";
			}
		}
		}
	}
}

int nextstate(int state,string expression)
{
	switch(state)
	{
	case 0:
	{
		if ( expression == "declaration")
		{
			return 2;
		}
		if ( expression == "declarations")
		{
			return 1;
		}
		if ( expression == "fun_declaration")
		{
			return 3;
		}
		if ( expression == "type")
		{
			return 5;
		}
		if ( expression == "var_declaration")
		{
			return 4;
		}
		return -1;
	}
	case 1:
	{
		return -1;
	}
	case 2:
	{
		if ( expression == "declaration")
		{
			return 2;
		}
		if ( expression == "declarations")
		{
			return 9;
		}
		if ( expression == "fun_declaration")
		{
			return 3;
		}
		if ( expression == "type")
		{
			return 5;
		}
		if ( expression == "var_declaration")
		{
			return 4;
		}
		return -1;
	}
	case 3:
	{
		return -1;
	}
	case 4:
	{
		return -1;
	}
	case 5:
	{
		return -1;
	}
	case 6:
	{
		return -1;
	}
	case 7:
	{
		return -1;
	}
	case 8:
	{
		return -1;
	}
	case 9:
	{
		return -1;
	}
	case 10:
	{
		return -1;
	}
	case 11:
	{
		return -1;
	}
	case 12:
	{
		if ( expression == "field")
		{
			return 17;
		}
		if ( expression == "fields")
		{
			return 16;
		}
		if ( expression == "type")
		{
			return 15;
		}
		return -1;
	}
	case 13:
	{
		if ( expression == "more_parameters")
		{
			return 19;
		}
		if ( expression == "parameter")
		{
			return 20;
		}
		if ( expression == "parameters")
		{
			return 18;
		}
		if ( expression == "type")
		{
			return 21;
		}
		return -1;
	}
	case 14:
	{
		return -1;
	}
	case 15:
	{
		return -1;
	}
	case 16:
	{
		return -1;
	}
	case 17:
	{
		if ( expression == "field")
		{
			return 17;
		}
		if ( expression == "fields")
		{
			return 24;
		}
		if ( expression == "type")
		{
			return 15;
		}
		return -1;
	}
	case 18:
	{
		return -1;
	}
	case 19:
	{
		return -1;
	}
	case 20:
	{
		return -1;
	}
	case 21:
	{
		return -1;
	}
	case 22:
	{
		return -1;
	}
	case 23:
	{
		return -1;
	}
	case 24:
	{
		return -1;
	}
	case 25:
	{
		if ( expression == "block")
		{
			return 29;
		}
		return -1;
	}
	case 26:
	{
		if ( expression == "more_parameters")
		{
			return 31;
		}
		if ( expression == "parameter")
		{
			return 20;
		}
		if ( expression == "type")
		{
			return 21;
		}
		return -1;
	}
	case 27:
	{
		return -1;
	}
	case 28:
	{
		return -1;
	}
	case 29:
	{
		return -1;
	}
	case 30:
	{
		if ( expression == "type")
		{
			return 34;
		}
		if ( expression == "var_declaration")
		{
			return 33;
		}
		if ( expression == "var_declarations")
		{
			return 32;
		}
		return -1;
	}
	case 31:
	{
		return -1;
	}
	case 32:
	{
		if ( expression == "block")
		{
			return 41;
		}
		if ( expression == "lexp")
		{
			return 39;
		}
		if ( expression == "statement")
		{
			return 37;
		}
		if ( expression == "statements")
		{
			return 35;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 33:
	{
		if ( expression == "type")
		{
			return 34;
		}
		if ( expression == "var_declaration")
		{
			return 33;
		}
		if ( expression == "var_declarations")
		{
			return 44;
		}
		return -1;
	}
	case 34:
	{
		return -1;
	}
	case 35:
	{
		return -1;
	}
	case 36:
	{
		if ( expression == "type")
		{
			return 34;
		}
		if ( expression == "var_declaration")
		{
			return 33;
		}
		if ( expression == "var_declarations")
		{
			return 47;
		}
		return -1;
	}
	case 37:
	{
		return -1;
	}
	case 38:
	{
		return -1;
	}
	case 39:
	{
		return -1;
	}
	case 40:
	{
		if ( expression == "exp")
		{
			return 53;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 41:
	{
		return -1;
	}
	case 42:
	{
		return -1;
	}
	case 43:
	{
		return -1;
	}
	case 44:
	{
		return -1;
	}
	case 45:
	{
		return -1;
	}
	case 46:
	{
		return -1;
	}
	case 47:
	{
		if ( expression == "block")
		{
			return 41;
		}
		if ( expression == "lexp")
		{
			return 39;
		}
		if ( expression == "statement")
		{
			return 37;
		}
		if ( expression == "statements")
		{
			return 60;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 48:
	{
		if ( expression == "block")
		{
			return 41;
		}
		if ( expression == "lexp")
		{
			return 39;
		}
		if ( expression == "statement")
		{
			return 37;
		}
		if ( expression == "statements")
		{
			return 61;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 49:
	{
		if ( expression == "exp")
		{
			return 62;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 50:
	{
		if ( expression == "exp")
		{
			return 68;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 51:
	{
		if ( expression == "exp")
		{
			return 69;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 52:
	{
		return -1;
	}
	case 53:
	{
		return -1;
	}
	case 54:
	{
		if ( expression == "exp")
		{
			return 83;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 55:
	{
		return -1;
	}
	case 56:
	{
		return -1;
	}
	case 57:
	{
		return -1;
	}
	case 58:
	{
		return -1;
	}
	case 59:
	{
		return -1;
	}
	case 60:
	{
		return -1;
	}
	case 61:
	{
		return -1;
	}
	case 62:
	{
		return -1;
	}
	case 63:
	{
		if ( expression == "exp")
		{
			return 96;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 64:
	{
		return -1;
	}
	case 65:
	{
		return -1;
	}
	case 66:
	{
		return -1;
	}
	case 67:
	{
		return -1;
	}
	case 68:
	{
		return -1;
	}
	case 69:
	{
		return -1;
	}
	case 70:
	{
		if ( expression == "exp")
		{
			return 107;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 71:
	{
		return -1;
	}
	case 72:
	{
		return -1;
	}
	case 73:
	{
		return -1;
	}
	case 74:
	{
		return -1;
	}
	case 75:
	{
		return -1;
	}
	case 76:
	{
		return -1;
	}
	case 77:
	{
		if ( expression == "exp")
		{
			return 111;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 78:
	{
		if ( expression == "exp")
		{
			return 113;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 79:
	{
		if ( expression == "exp")
		{
			return 114;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 80:
	{
		if ( expression == "exp")
		{
			return 115;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 81:
	{
		if ( expression == "exp")
		{
			return 116;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 82:
	{
		if ( expression == "exp")
		{
			return 117;
		}
		if ( expression == "var")
		{
			return 56;
		}
		return -1;
	}
	case 83:
	{
		return -1;
	}
	case 84:
	{
		return -1;
	}
	case 85:
	{
		return -1;
	}
	case 86:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 127;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 87:
	{
		return -1;
	}
	case 88:
	{
		if ( expression == "block")
		{
			return 134;
		}
		if ( expression == "lexp")
		{
			return 132;
		}
		if ( expression == "statement")
		{
			return 130;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 89:
	{
		return -1;
	}
	case 90:
	{
		if ( expression == "exp")
		{
			return 136;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 91:
	{
		if ( expression == "exp")
		{
			return 137;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 92:
	{
		if ( expression == "exp")
		{
			return 138;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 93:
	{
		if ( expression == "exp")
		{
			return 139;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 94:
	{
		if ( expression == "exp")
		{
			return 140;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 95:
	{
		if ( expression == "exp")
		{
			return 141;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 96:
	{
		return -1;
	}
	case 97:
	{
		return -1;
	}
	case 98:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 145;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 99:
	{
		return -1;
	}
	case 100:
	{
		return -1;
	}
	case 101:
	{
		if ( expression == "exp")
		{
			return 147;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 102:
	{
		if ( expression == "exp")
		{
			return 148;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 103:
	{
		if ( expression == "exp")
		{
			return 149;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 104:
	{
		if ( expression == "exp")
		{
			return 150;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 105:
	{
		if ( expression == "exp")
		{
			return 151;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 106:
	{
		if ( expression == "exp")
		{
			return 152;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 107:
	{
		return -1;
	}
	case 108:
	{
		return -1;
	}
	case 109:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 156;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 110:
	{
		return -1;
	}
	case 111:
	{
		return -1;
	}
	case 112:
	{
		return -1;
	}
	case 113:
	{
		return -1;
	}
	case 114:
	{
		return -1;
	}
	case 115:
	{
		return -1;
	}
	case 116:
	{
		return -1;
	}
	case 117:
	{
		return -1;
	}
	case 118:
	{
		return -1;
	}
	case 119:
	{
		return -1;
	}
	case 120:
	{
		return -1;
	}
	case 121:
	{
		if ( expression == "exp")
		{
			return 166;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 122:
	{
		return -1;
	}
	case 123:
	{
		return -1;
	}
	case 124:
	{
		return -1;
	}
	case 125:
	{
		return -1;
	}
	case 126:
	{
		return -1;
	}
	case 127:
	{
		return -1;
	}
	case 128:
	{
		return -1;
	}
	case 129:
	{
		if ( expression == "type")
		{
			return 34;
		}
		if ( expression == "var_declaration")
		{
			return 33;
		}
		if ( expression == "var_declarations")
		{
			return 170;
		}
		return -1;
	}
	case 130:
	{
		return -1;
	}
	case 131:
	{
		return -1;
	}
	case 132:
	{
		return -1;
	}
	case 133:
	{
		if ( expression == "exp")
		{
			return 175;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 134:
	{
		return -1;
	}
	case 135:
	{
		return -1;
	}
	case 136:
	{
		return -1;
	}
	case 137:
	{
		return -1;
	}
	case 138:
	{
		return -1;
	}
	case 139:
	{
		return -1;
	}
	case 140:
	{
		return -1;
	}
	case 141:
	{
		return -1;
	}
	case 142:
	{
		return -1;
	}
	case 143:
	{
		return -1;
	}
	case 144:
	{
		return -1;
	}
	case 145:
	{
		return -1;
	}
	case 146:
	{
		return -1;
	}
	case 147:
	{
		return -1;
	}
	case 148:
	{
		return -1;
	}
	case 149:
	{
		return -1;
	}
	case 150:
	{
		return -1;
	}
	case 151:
	{
		return -1;
	}
	case 152:
	{
		return -1;
	}
	case 153:
	{
		return -1;
	}
	case 154:
	{
		return -1;
	}
	case 155:
	{
		return -1;
	}
	case 156:
	{
		return -1;
	}
	case 157:
	{
		return -1;
	}
	case 158:
	{
		return -1;
	}
	case 159:
	{
		if ( expression == "exp")
		{
			return 186;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 160:
	{
		if ( expression == "exp")
		{
			return 187;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 161:
	{
		if ( expression == "exp")
		{
			return 188;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 162:
	{
		if ( expression == "exp")
		{
			return 189;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 163:
	{
		if ( expression == "exp")
		{
			return 190;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 164:
	{
		if ( expression == "exp")
		{
			return 191;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 165:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 192;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 166:
	{
		return -1;
	}
	case 167:
	{
		return -1;
	}
	case 168:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 196;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 169:
	{
		return -1;
	}
	case 170:
	{
		if ( expression == "block")
		{
			return 41;
		}
		if ( expression == "lexp")
		{
			return 39;
		}
		if ( expression == "statement")
		{
			return 37;
		}
		if ( expression == "statements")
		{
			return 197;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 171:
	{
		return -1;
	}
	case 172:
	{
		if ( expression == "block")
		{
			return 41;
		}
		if ( expression == "lexp")
		{
			return 39;
		}
		if ( expression == "statement")
		{
			return 198;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 173:
	{
		if ( expression == "exp")
		{
			return 199;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 174:
	{
		if ( expression == "exp")
		{
			return 200;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 175:
	{
		return -1;
	}
	case 176:
	{
		if ( expression == "exp")
		{
			return 208;
		}
		if ( expression == "var")
		{
			return 65;
		}
		return -1;
	}
	case 177:
	{
		return -1;
	}
	case 178:
	{
		return -1;
	}
	case 179:
	{
		return -1;
	}
	case 180:
	{
		return -1;
	}
	case 181:
	{
		return -1;
	}
	case 182:
	{
		return -1;
	}
	case 183:
	{
		return -1;
	}
	case 184:
	{
		return -1;
	}
	case 185:
	{
		return -1;
	}
	case 186:
	{
		return -1;
	}
	case 187:
	{
		return -1;
	}
	case 188:
	{
		return -1;
	}
	case 189:
	{
		return -1;
	}
	case 190:
	{
		return -1;
	}
	case 191:
	{
		return -1;
	}
	case 192:
	{
		return -1;
	}
	case 193:
	{
		return -1;
	}
	case 194:
	{
		return -1;
	}
	case 195:
	{
		return -1;
	}
	case 196:
	{
		return -1;
	}
	case 197:
	{
		return -1;
	}
	case 198:
	{
		return -1;
	}
	case 199:
	{
		return -1;
	}
	case 200:
	{
		return -1;
	}
	case 201:
	{
		return -1;
	}
	case 202:
	{
		if ( expression == "exp")
		{
			return 216;
		}
		if ( expression == "var")
		{
			return 72;
		}
		return -1;
	}
	case 203:
	{
		if ( expression == "exp")
		{
			return 217;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 204:
	{
		if ( expression == "exp")
		{
			return 218;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 205:
	{
		if ( expression == "exp")
		{
			return 219;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 206:
	{
		if ( expression == "exp")
		{
			return 220;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 207:
	{
		if ( expression == "exp")
		{
			return 221;
		}
		if ( expression == "var")
		{
			return 178;
		}
		return -1;
	}
	case 208:
	{
		return -1;
	}
	case 209:
	{
		return -1;
	}
	case 210:
	{
		if ( expression == "exp")
		{
			return 120;
		}
		if ( expression == "exps")
		{
			return 225;
		}
		if ( expression == "var")
		{
			return 123;
		}
		return -1;
	}
	case 211:
	{
		return -1;
	}
	case 212:
	{
		return -1;
	}
	case 213:
	{
		return -1;
	}
	case 214:
	{
		if ( expression == "block")
		{
			return 134;
		}
		if ( expression == "lexp")
		{
			return 132;
		}
		if ( expression == "statement")
		{
			return 226;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 215:
	{
		return -1;
	}
	case 216:
	{
		return -1;
	}
	case 217:
	{
		return -1;
	}
	case 218:
	{
		return -1;
	}
	case 219:
	{
		return -1;
	}
	case 220:
	{
		return -1;
	}
	case 221:
	{
		return -1;
	}
	case 222:
	{
		return -1;
	}
	case 223:
	{
		return -1;
	}
	case 224:
	{
		return -1;
	}
	case 225:
	{
		return -1;
	}
	case 226:
	{
		return -1;
	}
	case 227:
	{
		return -1;
	}
	case 228:
	{
		return -1;
	}
	case 229:
	{
		return -1;
	}
	case 230:
	{
		if ( expression == "block")
		{
			return 134;
		}
		if ( expression == "lexp")
		{
			return 132;
		}
		if ( expression == "statement")
		{
			return 231;
		}
		if ( expression == "var")
		{
			return 42;
		}
		return -1;
	}
	case 231:
	{
		return -1;
	}
	}
}
