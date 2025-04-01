#include<stdio.h>
main()
{
	float height,base,area;
	printf("\nEnter height=>");
	scanf("%f",&height);
	printf("\nEnter base=>");
	scanf("%f",&base);
	area=0.5*height*base;
	printf("\nArea of triangle=%.2f",area);
}
