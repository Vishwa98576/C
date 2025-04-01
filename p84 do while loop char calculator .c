#include<stdio.h>
main()
{
	int no1,no2;
	char op;
	do{
		printf("\nEnter '+' for add");
		printf("\nEnter '-' for sub");
		printf("\nEnter '*' for mul");
		printf("\nEnter '/' for div");
		printf("\nEnter 'e' for exit");
		printf("\nEnter a option=>");
		scanf("%c,&op");
		
		if(op=='+')
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nAdd=%d",no1+no2);
		}
		else if(op=='-')
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nSub=%d",no1-no2);
		}	
		else if(op=='*')
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nMul=%d",no1*no2);
		}
		else if(op=='/')
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nDiv=%d",no1/no2);
		}
		else
		{
			break;
		}
		}
		while(op!='e');
}
