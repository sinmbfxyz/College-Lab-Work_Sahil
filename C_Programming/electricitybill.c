#include<stdio.h>
void main(){
	int bill,extra,u;
	printf("enter your electricity unit");
	scanf("%d",&u);
	if (u<150){
		bill=u*3;
		printf("%d",u);
		
	}
	else if (u>150&&u<=350){
		extra=u-150;
		bill=100+extra*3.75+bill;
		printf("%d",bill);
	}
	else if (u>350&&u<=450){
		extra=u-350;
		bill=250+extra*4+(200*3.75)+(150*3);
		printf("%d",bill);
	}
	else if(u>450){
		extra=u-450;
		bill=300+extra*4.25+(200*3.75)+(150*3)+(100*4);
		printf("%d",bill);
	}
}
