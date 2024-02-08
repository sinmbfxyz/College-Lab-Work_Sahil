#include<stdio.h>
int main(){
	float H,seconds;
	printf("enter the time in hour");
	scanf("%f",&H);
	seconds=H*60*60;
	printf("%g seconds",seconds);
}
