#include<stdio.h>
#define N 2
main()
{
	int a[N][N],b[N][N];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter a no for A=>");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter a no for B=>");
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nA\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{	
			printf("%d ",a[i][j]);
		}
	printf("\n");
	}
	
	printf("\nB=\n");
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{	
			printf("%d ",b[i][j]);
		}
	printf("\n");
	}
	printf("\nResult ofA+B\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",a[i][j] + b[i][j]);
		}
		printf("\n");
	}
}

