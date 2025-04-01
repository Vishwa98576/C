#include<stdio.h>
void max2(int no1,int no2)
{
	if(no1>no2)
	{
		printf("\nNo1 is greater");
	}
	else
	{
		printf("\nNo2 is greater");
	}
}
void add(int no1,int no2,int no3)
{
	printf("\nAddition=%d",no1+no2+no3);
}
main()
{
	max2(99,45);
	add(44,9,21);
}
