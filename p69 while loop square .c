#include<stdio.h>
main()
{
	int i;
	int no,limit;
	printf("\nEnter the limit=>");
	scanf("%d",&limit);
	
	i=1;
	while(i<=limit)
	{
		printf("\n %d",i*i);
		i++;
	}
}
