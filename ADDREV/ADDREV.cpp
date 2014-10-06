#include <iostream>
using namespace std;

int reverse_number(int number){
	int temp=0;
	while(number/10>0){
	temp=temp*10+(number%10);
	number=number/10;
	}
	temp=temp*10+number;
	return temp;
}

int reverse_sum(int firstnum,int secondnum){
	int result;
	firstnum=reverse_number(firstnum);
	secondnum=reverse_number(secondnum);
	result=firstnum+secondnum;
	return reverse_number(result);
}

int main(int argc, const char *argv[])
{

	int testcases,firstnum,secondnum;
	cin>>testcases;
	while(testcases>0){
	cin>>firstnum>>secondnum;
	cout<<reverse_sum(firstnum,secondnum)<<endl;
	testcases--;
	}
	return 0;
}