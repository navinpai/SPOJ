#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
	long int number,result,addterm,fivepower;
	int testcases;

	cin>>testcases;

	while(testcases>0){
	cin>>number;

	result=0;
	fivepower=5;
	
	while(1){
	addterm=number/fivepower;
	if(addterm==0)
		break;
	result+=addterm;
	fivepower*=5;
	}
	
	cout<<result<<endl;
	
	testcases--;
	}
	return 0;
}