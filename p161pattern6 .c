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
/*
10101
10101
10101

1111
0000
1111
0000



*/
