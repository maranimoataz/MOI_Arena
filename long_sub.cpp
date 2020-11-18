#include <iostream>
#define MAX 100
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int _long(int arr[],int n,int *max_ref){
	if(n==1)
	return 1;
	int res, max_ending_here = 1;
	int i;
	for(i=1;i<n;i++){
		res=_long(arr,i,max_ref);
		if(arr[i-1]<arr[n-1] && res+1 > max_ending_here)
			max_ending_here =  res+1;
	}
	if(*max_ref<max_ending_here)
		*max_ref=max_ending_here;
	
	return max_ending_here;
}
int longest(int arr[], int n){
	int max=1;
	_long(arr,n,&max);
	return max;
}
int main(int argc, char** argv) {
	int i,n;
	int tab[MAX];
	std::cin>>n;
	for(i=0;i<n;i++){
		std::cin>>tab[i];
		std::cout<<"\n";
	}
	std::cout<<longest(tab,n);
	return 0;
}
