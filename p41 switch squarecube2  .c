#include<stdio.h>
main()
{
	int x;
	char opt;
	printf("\nPress s for square");
	printf("\nPress c for cube");
	printf("\nEnter opt=>");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case 's':
			printf("\nEnter a no=>");
	        scanf("%d",&x);
	        printf("\nSquare=%d",x*x);
			break;
		case 'c':
			printf("\nEnter a no=>");
	        scanf("%d",&x);
	        printf("\nCube=%d",x*x*x);
			break;
		default:
			    printf("\nWrong");
	}
	
	}
