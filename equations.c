#include<stdio.h>
int main(){
	int a,b,c,d;
	a=1,b=2,c=3,d=4;
	printf("(a+b)/(c+d)=%.2f\n",(float)(a+b)/(c+d)); 
	printf("a+b/(c+d)=%.2f\n",(float)a+b/(c+d)); 
	printf("(a+b)/c+d=%.2f\n",(float)(a+b)/c+d); 
	printf("a*b/c*d=%.2f",(float)a*b/c*d); 
	return 0;
}