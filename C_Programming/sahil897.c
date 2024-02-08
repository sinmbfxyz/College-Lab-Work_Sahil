#include<stdio.h>
void main()
{
	int day;
printf("1 for sunday\n 2 for monday\n 3 for tuesday \n 4 for wednesday\n 5 for thrusday\n 6 for friday\n");
	printf("enter the day\n");
	scanf("%d",&day);
	switch(day)
	{
			case 1:
			printf("sunday");
			break;
			case 2:
			printf("monday");
			break;
			case 3:
			printf("tuesday");
			break;
			case 4:
			printf("wednesday");
			break;
			case 5:
			printf("thrusday");
			break;
			case 6:
			printf("friday");
			break;
			case 7:
			printf("saturday");
			break;
			default :
			printf("invalid");
				
	}
}
