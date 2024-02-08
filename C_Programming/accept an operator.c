#include<stdio.h>
void main()
{
	int a,b;
	char c;
		printf("enter any operator \n + for add \n - for sub \n * for multiply\n");
	scanf("%c",&c);
	printf("enter two numbers");
	scanf("%d %d",&a,&b);

	switch(c){
		case '+':
		printf("add is %d",a+b);
		break;
		case '-':
			printf("subtraction is %d",a-b);
			break;
		case '*':
		printf("multiply is %d",a*b);
		break;
		case '/':
		printf("division %d",a/b);
		break;
		case '%':
		printf("modulus %d",a%b);
		break;
		 default:
		 printf("invalid ");	
			
			
	}
}
