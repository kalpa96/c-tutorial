#include<stdio.h>
int main(){
	
	char C='B';
	char D='A';
	char E='Z';
	int i=3,j=3,k=3;
	double x=0.0,y=2.3;
	
	printf("the value of:%d\n",i && j && k);
	printf("the value of:%d\n",x || i && j-3);
	printf("the value of:%d\n",i<j && x<y); 
	printf("the value of:%d\n",i<j || x<y);
	printf("the value of:%d\n",'A'<=C && C<='z');
	printf("the value of:%d",C-1=='A'||C+1=='Z');
	
	return 0;
}