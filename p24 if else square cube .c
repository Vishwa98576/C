#include<stdio.h>
main()
{
	int x,op;
	printf("\nEnter 1 for square=>");
	printf("\nEnter 2 for cube=>");
	printf("\nEnter no =>");
	scanf("%d",&op);
	
	if(op==1)
	{
		printf("\nEnter no=>");
		scanf("%d",&x);
		printf("\nSquare=%d",x*x);
	}
	else if(op==2)
	{
		printf("\nEnter no=>");
		scanf("%d",&x);
		printf("\nCube=%d",x*x*x);
	}
	else
	{
		printf("\nWrong opt");
	}
}
