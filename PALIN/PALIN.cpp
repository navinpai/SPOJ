#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

string input;

void increment_string(long int position){
	string initial="0123456789";
	string table="1234567890";

	if(position>0){

		char replace = table[initial.find(input[position])]	;
		if(input[position]=='9')
		{
			increment_string(position-1);
		}
		input[position]=replace;
	}
}

int main(int argc, const char *argv[])
{
	long long int testcases;

	long long int i;

	scanf("%d",&testcases);

	while(testcases--){
		cin>>input;

		increment_string((input.length()-1)/2);

		for(i=0;i<input.length()/2;i++){
			input[input.length()-1-i]=input[i];
		}		

		cout<<input<<endl;

	}
	return 0;
}
