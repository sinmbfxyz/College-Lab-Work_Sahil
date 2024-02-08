#include<stdio.h>
int main()
{
	int hours,seconds;
	printf("enter the time in hours");
	scanf("%d",&hours);
	seconds=hours*60*60;
	printf("%d seconds",seconds);
}
