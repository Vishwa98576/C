#include<stdio.h>
main()
{
	int square,cube,x,opt;
	printf("\nEnter a no=>");
	scanf("%d",&x);
	printf("\nEnter 1 for square");
	printf("\nEnter 2 for cube");
	printf("\nSelect any opt=>");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			printf("\nSquare=%d",x*x);
			break;
		case 2:
			printf("\nCube=%d",x*x*x);
			break;
		default:
			    printf("\nWrong");
	}
	
}
