#include<stdio.h>
int main(){
	int i,f;
	float h;
	
	printf("enter the height of feat and inch:\n");
	scanf("%d",&f);
	scanf("%d",&i);
	h=(f*12*2.54)+(i*2.54);
	
	printf("the height of a person:%f",h);
	
	return 0;
	
}