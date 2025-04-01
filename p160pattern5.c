#include<stdio.h>
main()
{
	int s,i,j;
	printf("\nEnter the size of square=>");
	scanf("%d",&s);
	
	for(i=1;i<=s;i++)
	{
		for(j=1;j<=s;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
}
