#include<stdio.h>
int main(){
	int a,b;
	printf("enter the value of a and b ");
	scanf("%d %d", &a,&b);
	a>b?printf(" a is greatest and diff is %d",a-b):printf(" b is smallest and sum is %d",a+b);
}
