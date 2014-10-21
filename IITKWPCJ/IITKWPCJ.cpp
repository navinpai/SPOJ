#include <iostream>
#include<string>

using namespace std;
int main(int argc, const char *argv[])
{
	int testcases;
	string input1, input2,temp;
	cin>>testcases;
	while(testcases--){
		cin>>input1>>input2;
		if(input1.length()>input2.length())
		{
			temp=input1;
			input1=input2;
			input2=temp;
		}
		//input1 is smaller
		int flag=0;
		int input1length=input1.length(),i=0;
		for(int j=0;j<input2.length();j++)
		{
			if(input2[j]==input1[i]){
				i++;
				if(i>=input1length){
					i=0;
				}		
			}
			else{
				flag=1;
			}


		}

		if(flag==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
	return 0;
}