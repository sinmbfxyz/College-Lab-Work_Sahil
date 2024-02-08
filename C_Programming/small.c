#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter value of a b c");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a<c){
		printf("a is smallest",a);
		
	}
	else if (b<c){
		printf("b is smallest",b);
		
	}
	else{
		printf("c is smallest",c);
	}
}
