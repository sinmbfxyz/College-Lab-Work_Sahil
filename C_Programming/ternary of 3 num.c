#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter a b c ");
	scanf("%d %d %d",&a,&b,&c);
	(a<b)?
	(a<c)?printf(" %d a is smallest",a)
	:printf("%d c is smallest",c)
	:(b<c)?printf("%d b is smallest",b)
	:printf("%d c is smallelse",c);
}
