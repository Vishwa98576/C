#include<stdio.h>
main()
{
	int no;
	hi:
		printf("\nEnter a no=>");
		scanf("%d",&no);
		if(no>0)
		{
			printf("\nSquare=%d",no*no);
		}
		else
		{
			printf("\nEnter positive no");
			goto hi;
		}
}
