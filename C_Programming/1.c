#include<stdio.h>
int main()
{
	int length,breadth,height,volume;
	printf("enter the value of length");
	scanf("%d",&length);
	printf("enter the value of breadth");
	scanf("%d",&breadth);
	printf("enter the value of height ");
	scanf("%d",&height);
	volume=length*breadth*height;
	printf("%d",volume);
}
