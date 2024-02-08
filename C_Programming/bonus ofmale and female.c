#include<stdio.h>
void main(){
	float s,b;
	char g;
	printf("enter salary");
	scanf("%f",&s);
	printf("enter the m for male and f for female");
	scanf("%c",&g);
if(s<1000){
	b=0.02*s;
	
	if(g=='m'){
	b=b+0.05*s;
		printf("bonus %f",b);
	}		
	else{
		b=b+0.10*s;
		printf("bonus %f",b);
	}


}}
