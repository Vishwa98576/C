#include<stdio.h>
main()
{
	int i,j,r,k=5;
	printf("\nEnter rows=>");
	scanf("%d",&r);
	for(i=1;i<r;i++)
	{
		for(j=1;j<=i;j++)
		{
			
				printf("%d",k);
		}
		  k--;
		printf("\n");
	}
	
}

