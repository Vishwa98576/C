#include<stdio.h>
main()
{
	int no1,no2,no3;
	printf("\nEnter no1=>");
	scanf("%d",&no1);
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	printf("\nEnter no3=>");
	scanf("%d",&no3);
	
	if(no1>no2 && no1>no3)
	{
		printf("\nNo1 is greater");
	}
	else if(no2>no1 && no2>no3)
	{
			printf("\nNo2 is greater");
	}
	else if(no3>no1 && no3>no2)
	{
			printf("\nNo3 is greater");
	}
	else
	{
		printf("\nAll are equal");
	}
}
