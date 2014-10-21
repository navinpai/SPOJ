#include <iostream>
#include<string>
#include<stack>
#include <cstdlib>
#include <sstream>
#include<iomanip>

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
	getline(cin,input);
	while(testcases--){
		tempstring.clear();
		while(!opstack.empty()){
			opstack.pop();
		}
		getline(cin, input);
		//cout<<input<<endl;
		for(i=0;i<input.length();i++){
			if(input[i]=='('){
			}
			else if((input[i]>='0'&&input[i]<='9')|| input[i]=='.'||input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/')
			{
				tempstring+=input[i];
			}
			else if(input[i]==' '){
				if(!tempstring.empty())
				{   cout<<"inserted:"<<tempstring<<endl;
					opstack.push(tempstring);
					tempstring.clear();
				}
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

				switch((int)operand.c_str()[0]){
					case '+':
						tempstring=Convert(opf1+opf2);
						break;
					case '-': 
						tempstring=Convert(opf2-opf1);
						break;
					case '*': 
						tempstring=Convert(opf1*opf2);
						break;
					case '/': 
						tempstring=Convert(opf2/opf1);
						break;
					default: break;
				}

				//cout<<"op1:"<<opf1<<" op2:"<<opf2<<" op:"<<tempstring<<endl;

				opstack.push(tempstring);
				tempstring.clear();
			}

		}
		if(!opstack.empty())
			cout<<setprecision(2)<<std::fixed<<atof(opstack.top().c_str())<<endl;
		while(!opstack.empty()){
			opstack.pop();
		}


	}
	return 0;
}