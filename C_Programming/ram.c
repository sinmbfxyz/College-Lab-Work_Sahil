#include<stdio.h>
#include<math.h>
void main(){
	float area,s,a,b,c;
	ptintf("enter three sides of triangle");
	scanf("%f %f %f",&a,&b,&c);
	s=((a+b+c)/2);
	printf("%f",s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%f",area);
}
