#include<stdio.h>
int main(){ 

	float c,f;
	
	printf("Enter the value of Celsius temperature : ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	
	printf("Fahrenheit temperature : %f",f);
	
	return 0;
}