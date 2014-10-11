#include <iostream>
#include<cstdio>

using namespace std;

inline void inp_lld(long long int *n1)
{
	long long int n=0;
	int ch=getchar_unlocked();
	while(ch>='0' && ch<='9')
		n=(n<<3)+(n<<1)+ch-'0',ch=getchar_unlocked();
	*n1=n;
}

int main(int argc, const char *argv[])
{
	long long int testcases,divisor,number,count=0;
	inp_lld(&testcases);
	inp_lld(&divisor);
	while(testcases--){
		inp_lld(&number);
		if(number%divisor==0)
			++count;
	}
	printf("%lld\n",count);
	return 0;
}