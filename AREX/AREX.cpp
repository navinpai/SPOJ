#include <iostream>
#include<string>
#include<stack>
#include <cstdlib>
#include <sstream>

using namespace std;

std::string Convert(float number){
    std::ostringstream buff;
    buff<<number;
    return buff.str();   
}


int main(int argc, const char *argv[])
{
	string input,tempstring,op1,op2,operand;
	stack<string> opstack;
	float opf1,opf2;
	int testcases,i;
	cin>>testcases;

	while(testcases--){
		getline(cin, input);
		for(i=0;i<input.length();i++){
			if(input[i]=='('){
			}
			else if((input[i]>='0'&&input[i]<='9')|| input[i]=='.'||input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/')
			{
				tempstring+=input[i];
			}
			else if(input[i]==' '){
				opstack.push(tempstring);
				tempstring.clear();
			}
			else if(input[i]==')'){
				op1=opstack.top();
				opstack.pop();
				operand=opstack.top();
				opstack.pop();
				op2=opstack.top();
				opstack.pop();

				opf1=atof(op1.c_str());
				opf2=atof(op2.c_str());
				
				tempstring.clear();

				cout<<operand<<endl;
				switch('+'){
					case '+': tempstring=Convert(opf1+opf2);
							  break;
					case '-': tempstring=Convert(opf1-opf2);
							  break;
					case '*': tempstring=Convert(opf1*opf2);
							  break;
					case '/': tempstring=Convert(opf1/opf2);
							  break;
					default: break;
				}

				cout<<"op"<<tempstring<<endl;

				opstack.push(tempstring);

			}
		}
	cout<<opstack.top()<<endl;
	}
	return 0;
}