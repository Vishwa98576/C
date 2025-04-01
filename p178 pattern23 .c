#include<stdio.h>
main()
{
	int i,j,n,k=1;
	printf("\nEnter rows=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n;j>=i;j--)
		{
			printf("%d",k);
		}
		k++;
		printf("\n");
	}
}
