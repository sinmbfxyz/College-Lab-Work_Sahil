#include<stdio.h>	
void main()

{
	int id=989;
	int pass=887;
	printf("enter your id");
	scanf("%d",&id);
	switch (id)
	{
		case 989:
			printf("\n enter your password ");
			scanf("%d",&pass);
			switch (pass){
				case 887:
					printf("welcome ");
					break;
					default :
						printf("wrong password ");
						break;
						
			}
	break;
	default :
		printf("\nwrong id");
		break;
	}
	
}
