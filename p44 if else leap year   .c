#include<stdio.h>
main()
{
	int x;
	printf("\nEnter a year=>");
	scanf("%d",&x);
	
	if(x%4==0)
	{
		printf("\nIt is a leap year");
	}
	else
	{
		printf("\nIt is not a leap year");
	}
}
