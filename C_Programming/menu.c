#include<stdio.h>
#include<process.h>
int main()
{
	int c,d;
	printf("-------------MENU-----------");
	printf("\n1.pizza \n2.momo \n3.chowmein \n4.burger \n5.exit  ");
	printf("\nenter your choice from 1-5");
	scanf("%d",&c);
	switch(c){
		case 1:
			printf("pizza");
			break;
			case 2:
				printf(" enter \n1.veg \n2.chicken \n3.buff");
				scanf("%d",&d);
				switch (d){
				case 1:
				printf("veg momo is 90");
				break;
				case 2:
				printf("chicken momo is 120");
				break;
				case 3:
				printf("buff momo is 100");
				break;
				case 4:
				exit(0);							
				default :
				printf("invalid");
				}
				break;
				case 3:
					printf("chowmein");
					break;
					case 4:
						printf("burger");
						break;
						case 5:
						exit(0);		  
					  default :
					  	printf("invalid");
	}
}
