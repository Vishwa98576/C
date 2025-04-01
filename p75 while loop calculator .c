#include<stdio.h>
main()
{
	int no1,no2,op;
	while(1)
	{
		printf("\nEnter 1 for add");
		printf("\nEnter 2 for sub");
		printf("\nEnter 3 for mul");
		printf("\nEnter 4 for div");
		printf("\nEnter 5 for exit");
		printf("\nEnter a option=>");
		scanf("%d,&op");
		
		if(op==1)
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nAdd=%d",no1+no2);
		}
		else if(op==2)
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nSub=%d",no1-no2);
		}
		else if(op==3)
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nMul=%d",no1*no2);
		}
		else if(op==4)
		{
			printf("\nEnter no1=>");
			scanf("%d",&no1);
			printf("\nEnter no2=>");
			scanf("%d",&no2);
			printf("\nDiv=%d",no1/no2);
		}
		else if(op==5)
		{
			break;
		}
	}
}
