#include<stdio.h>
main()
{
	int i,j,r;
	printf("\nEnter rows=>");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=1;j<r;j++)
		{
			printf("%d",j%2);
		}
		printf("\n");
	}
	
}

