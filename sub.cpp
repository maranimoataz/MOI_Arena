#include <iostream>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sub_array(int n){
	int i,sum=0,max=0;
	int tab[n];
	for(i=0;i<n;i++){
		std::cin>>tab[i];
	}
	std::cout<<"\t";
	for(i=0;i<10;i++){
		sum+=tab[i];
		if(sum>max)
		max=sum;
		if(sum<0)
		sum=0;
	}
	return max;
}
int main(int argc, char** argv) {
	int n;
	std::cin>>n;
	std::cout<<sub_array(n);
	
	return 0;
	
}
