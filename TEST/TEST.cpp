#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int input;

	while(1){
	cin>>input;
	if(input==42)
		break;
	cout<<input<<endl;
	}
	return 0;
}