#include<stdio.h>
main()
{
	int i,j,r,k=0;
	printf("\nEnter rows=>");
	scanf("%d",&r);
	for(i=1;i<r;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k==0)
			{
				printf("1");
				k=1;
			}
			else
			{
				printf("0");
				k=0;
			}
		}
		printf("\n");
	}
	
}

