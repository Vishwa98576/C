#include<stdio.h>
main()
{
	int s,c,x;
	char op;
	printf("\nEnter 's' for square");
	printf("\nEnter 'c' for cube");
	printf("\nEnter no=>");
	scanf("%c",&op);
	
	if(op=='s')
	{
		printf("\nEnter no=>");
		scanf("%d",&x);
		printf("\nSquare=%d",x*x);
	}
	else if(op=='c')
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
