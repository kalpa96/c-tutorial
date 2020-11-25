#include<stdio.h>
int main(){
	int m,n,o,p;
	m=40,n=20,o=20,p=30;
	
	if(m>n && m!=0){
		printf("1\n"); //true
	}
	else
		printf("0\n");
	if(o>p || p!=20){
		printf("1\n"); //true
	}
	else
		printf("0\n");
	if(!(m>n && m!=0)){
		printf("1"); //false
	}
	else
		printf("0");
	return 0;
}