#include<stdio.h>
int main(){
	int m,h,d;
	m=60;
	h=24;
	d=365;
	
	printf("amount of minutes of day:%d\n",m*h);
	printf("amount of minutes of year:%d",m*h*d);
	
	return 0;
}