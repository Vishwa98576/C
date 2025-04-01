#include<stdio.h>
main()
{
	int i,op;
	while(1)
	{
		printf("\nEnter 1 for square");
		printf("\nEnter 2 for cube");
		printf("\nEnter a option=>");
		scanf("%d",&op);
		
		if(op==1)
		{
			printf("\nEnter a no=>");
			scanf("%d",&i);
			printf("\nSquare=%d",i*i);
		}
		else if(op==2)
		{
			printf("\nEnter a no=>");
			scanf("%d",&i);
			printf("\nCube=%d",i*i*i);
		}
		else if(op==3)
		{
			break;
	    }
		else
		{
			printf("\nWrong");
		}
		
	}
}
