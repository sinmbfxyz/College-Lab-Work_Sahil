#include<stdio.h>
void main(){
	int m1,m2,m3,d1,d2,d3,y1,y2,y3;
	printf("enter your current date");
	scanf("%d %d %d",&y2,&m2,&d2);
	printf("enter your date of birth");
	scanf("%d %d %d",&y1,&m1,&d1);

	y3=y2-y1;
	m3=m2-m1;
	d3=d2-d1;
	 
	 if (d3<0){
	 	m3--;
	 	d3=d3+30;
	 }
	 if (m3<0)
	 {
	 	y3--;
	 	m3=m3+12;
	 }
	 printf("your are %d years %d months %d days",y3,m3,d3);
}
