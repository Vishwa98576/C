#include<stdio.h>
main()
{
	int i,j,n;
	printf("\nEnter rows=>");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
