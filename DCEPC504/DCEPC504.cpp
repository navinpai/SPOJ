#include <iostream>
#include<cstdio>
using namespace std;

int main(int argc, const char *argv[])
{
	int testcases;
	long long int generation,child,count;
	scanf("%d",&testcases);
	while(testcases--){
		scanf("%lld %lld",&generation,&child);

		if(child==1){
			printf("Male\n");;
		}
		else{
			count=0;
			--child;
			while(child>1){
				if(child%2!=0){
					++count;
				}
				child=child/2;
			}

			if(count%2==0){
				printf("Female\n");
			}
			else{
				printf("Male\n");
			}
		}
	}
	return 0;
}