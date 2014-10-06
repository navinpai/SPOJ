#include <iostream>
#include <stack>
#include<string>

using namespace std;

int main(int argc, const char *argv[])
{
	int testcases,i;
	string exp1,exp2,op;
	string expression;
	string result;
	stack<string> charstack;
	
	cin>>testcases;

	while(testcases>0){
	cin>>expression;
	i=0;
	while(i<=expression.length()){
	if(expression[i]=='(');	
	else if(expression[i]==')'){
		exp2=charstack.top();
		charstack.pop();
		op=charstack.top();
		charstack.pop();
		exp1=charstack.top();
		charstack.pop();
		exp1=exp1+exp2+op;
		charstack.push(exp1);
		result=charstack.top();
	}
	else{
		charstack.push(string(1,expression[i]));
	}
	i++;
	}

	cout<<result<<endl;

	charstack.empty();	
	testcases--;
	}

	return 0;
}