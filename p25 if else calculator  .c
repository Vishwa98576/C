#include<stdio.h>
main()
{
	int no1,no2,op;
	printf("\nEnter 1 for addition");
	printf("\nEnter 2 for subtraction");
	printf("\nEnter 3 for multiplication");
	printf("\nEnter 4 for division");
	printf("\nEnter opt=>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nAddition=%d",no1+no2);
	}
	else if(op==2)
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nSubtraction=%d",no1-no2);
	}
	else if(op==3)
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nMultiplication=%d",no1*no2);
	}
	else if(op==4)
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
