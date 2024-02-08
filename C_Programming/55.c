#include<stdio.h>
#include<math.h>
int main(){
	float square,cube, num;
	printf("enter the value of num");
	scanf("%f",&num);
	square=pow(num,2);
	cube=pow(num,3);
	printf("%g square of given num\n",square);
	printf("%g cube of given number",cube);
}
