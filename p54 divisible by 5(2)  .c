#include<stdio.h>
main()
{
	int i,n;
	printf("\nEnter n=>");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	if(i%5==0)
	{
		printf("\n %d",i);
	}
}

