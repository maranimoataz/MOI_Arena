#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n){
	if(n==0 || n==1)
		return n;
	else 
		return fib(n-1)+fib(n-2);
}
int main(int argc, char** argv) {
	int q,i,n;
	std::cin>>q;
	for(i=0;i<q;i++){
		std::cin>>n;
		std::cout<<fib(n);
		std::cout<<"\n";
	}
	return 0;
}
