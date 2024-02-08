#include<stdio.h>
void main(){
	char b,c;
	printf("enter the alphabet on lowercase ");
	scanf("%c",&c);
	fflush(stdin);
	printf("enter the alphabet on uppercase ");
	scanf("%c",&b);
	c-=32;
	printf("%c\n",c);
	b+=32;
 	printf("%c",b);
}
