#include<stdio.h>
void main(){
	float s,b1,b,bonus;
	char g;
	printf("enter the m for male and f for female ");
	scanf("%c",&g);
	printf("enter salary ");
	scanf("%f",&s);

if(s<10000){
	b1=0.02*s;

	if(g=='m'){
			bonus=s*0.05+b1;
	b=0.05*s+b1+s;
		printf("bonus %f",bonus);
		printf("bonus aand salary %f",b);
	}		
	else{
		bonus=b1+s*0.10;
		b=b1+0.10*s+b1+s;
		printf("bonus %f",b);
	}}
	else{
		if(s>10000){
			if(g=='m'){
	b=0.05*s+s;
	
		printf("bonus %f",b);
	}		
	else{
		b=0.10*s+s;
		printf("bonus %f",b);
	}	
		}
	}
		
	
}
