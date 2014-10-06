#include <iostream>
#include<algorithm>
using namespace std;

int main(int argc, const char *argv[])
{
	long long int i,j,num_of_trees,min_wood;
	cin>>num_of_trees>>min_wood;

	long long int tree_heights[num_of_trees],sum_array[num_of_trees];
	for(i=0;i<num_of_trees;i++){
		cin>>tree_heights[i];	
	}

	sort(tree_heights,tree_heights+num_of_trees);
	sum_array[num_of_trees-1]=0;
	j=1;
	for(i=num_of_trees-2;i>=0;i--){
		sum_array[i]=sum_array[i+1]+j*(tree_heights[i+1]-tree_heights[i]);
		j++;
		//cout<<tree_heights[i]<<" "<<sum_array[i]<<endl;

	}

//	cout<<"SUM"<<endl;
//	for(i=0;i<num_of_trees;i++)
//		cout<<sum_array[i]<<endl;
	
	for(i=0;i<num_of_trees-1;i++){
	if(min_wood>=sum_array[i])
	{
		break;
	}
	}

	long long int level=tree_heights[i];
	long long int taller_trees=num_of_trees-i;
	long long int current_yield=sum_array[i];

	//cout<<level<<" "<<taller_trees<<" "<<current_yield<<endl;
	while(current_yield<min_wood){
	level-=1;
	current_yield+=taller_trees;
	}
	cout<<level<<endl;
	return 0;
}