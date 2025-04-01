#include<stdio.h>
main()
{
    int i,j,n,k;
	printf("\nEnter rows=>");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    k=n;
		for(j=n;j>=i;j--) 
		{
			printf("%d",k);
			k--;
		}
		
		printf("\n");
	}
}
