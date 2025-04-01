#include<stdio.h>
main()
{
	float h,b,r;
	char op;
	printf("\nEnter 't' for triangle");
	printf("\nEnter 'c' for cube");
	printf("\nEnter opt=>");
	scanf("%c",&op);
	
	if(op=='t')
	{
		printf("\nEnter h=>");
		scanf("%f",&h);
		printf("\nEnter b=>");
		scanf("%f",&b);
		printf("\nArea of triangle=.%2f",0.5*h*b);
	}
	else if(op=='c')
	{
	    printf("\nEnter radius=>");
		scanf("%f",&r);
		printf("\nArea of circle=%f",3.14*r*r);
	}
	else
	{
		printf("\nWrong opt");
	}
}
