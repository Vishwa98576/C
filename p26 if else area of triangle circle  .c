#include<stdio.h>
main()
{
	float h,b,r;
	int op;
	
	printf("\nEnter 1 for triangle");
	printf("\nEnter 2 for circle");
	printf("\nEnter opt=>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter h=>");
		scanf("%f",&h);
		printf("\nEnter b=>");
		scanf("%f",&b);
		printf("\nArea of triangle=.%2f",0.5*h*b);
	}
	else if(op==2)
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
