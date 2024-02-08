#include<stdio.h>
void main()
{
	int s1,s2,a,b,c,d;
	printf("enter a b c d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	s1=(a<b)?a:b;
	s2=(c<d)?c:d;
	(s1<s2)?printf("%d is smallest ",s1):printf("%d is smallest ",s2);
}
