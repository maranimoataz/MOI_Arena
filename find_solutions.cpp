#include <iostream>
#include <cmath>
#define MAX pow(10,9)
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
   int sum_of_digit(int S){
   		int sum=0,m;
   		while(S>0){
   			m=S%10;
   			sum+=m;
   			S=S/10;
		   }
		   return sum;
   }
int find_x(int a, int b, int c){
	int x,comp=0;
	for(x=1;x<MAX;x++){
		if(x==a*pow(sum_of_digit(x),b)+c)
		comp++;		
	}
	return comp;
}
int main(int argc, char** argv) {
		int a,b,c;    
		std::cin>>a;
		std::cout<<"\n";
		std::cin>>b;
		std::cout<<"\n";
		std::cin>>c;
		std::cout<<find_x(a,b,c);
		return 0;  
		}  
