#include<stdio.h>
void add(int no1,int no2,int no3,int no4,int no5)
{
	printf("\nAddition=%d",no1+no2+no3+no4+no5);
}
main()
{
	int no1,no2,no3,no4,no5;
	printf("\nEnter no1=>");
	scanf("%d",&no1);
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	printf("\nEnter no3=>");
	scanf("%d",&no3);
	printf("\nEnter no4=>");
	scanf("%d",&no4);
	printf("\nEnter no5=>");
	scanf("%d",&no5);
	
	add(no1,no2,no3,no4,no5);
}

