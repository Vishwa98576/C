#include<stdio.h>
main()
{
    int i,j,n,k;
	printf("\nEnter rows=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    k=n;
		for(j=1;j<=i;j++) 
		{
			printf(" ");
		}
		for(j=n;j>=1;j--)
		{
			printf("%d",k);
			k--;
		}
		printf("\n");
	}
}
