#include<stdio.h>
#define N 2
#define M 2
main()
{
int a[N][M];
	int i,j;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("\nEnter a no=>");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{	
			printf("%d ",a[j][i]);
		}
	printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{	
			printf("%d ",a[j][i]);
			
		}
	printf("\n");
	}
}
