#include<stdio.h>
void main(){
	
	int a,b,c;
	printf("enter the value of a b and c ");
	scanf("%d %d %d",&a,&b,&c);
	a>b
	?a>c
	?printf("%d a is largest",a)
	:printf("%d c is largest",c)
	:b>c
	?printf("%d b is largest",b)
	:printf("%d c is largest")
}
