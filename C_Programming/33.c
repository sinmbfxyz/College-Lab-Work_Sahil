#include<stdio.h>
int main(){
	int price;
	float quantity,total;
	printf("enter the required quantity\n");
	scanf("%f",&quantity);
	printf("enter the price of quantity\n");
	scanf("%d",&price);
	total=price*quantity;
	printf("%g the total price\n",total);
}
