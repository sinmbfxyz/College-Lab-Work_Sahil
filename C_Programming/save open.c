#include<stdio.h>
void main(){
	char ch;
	printf("enter \ns for save \no for open and \ne for exit ");
	scanf("%c",&ch);
	switch(ch){
		case 's':
			printf("the file is save");
			break;
			 		case 'o':
			printf("the file is open");
			break;
					case 'e':
			printf("do you want to exit");
			break;
			 default:
			 	printf("not valid");
	}
}
