#include<stdio.h>
main()
{
    int no1,no2;
    char op;
    printf("\nEnter '+' for addition");
    printf("\nEnter '-' for subtraction");
    printf("\nEnter '*' for multiplication");
    printf("\nEnter '/' for division");
    printf("\nEnter opt=>");
    scanf("%c",&op);
    
    if(op=='+')
    {
    	printf("\nEnter no1=>");
    	scanf("%d",&no1);
    	printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nAddition=%d",no1+no2);
	}
	else if(op=='-')
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nSubtraction=%d",no1-no2);
	}
	else if(op=='*')
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nMultiplication=%d",no1*no2);
	}
	else if(op=='/')
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nDivision=%d",no1/no2);
	}
	else
	{
		printf("\nWrong opt");
	}
}
