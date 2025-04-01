#include<stdio.h>
main()
{
	int english,hindi,maths,total;
	printf("\nEnter marks of english=>");
	scanf("%d",&english);
	printf("\nEnter marks of hindi=>");
	scanf("%d",&hindi);
	printf("\nEnter marks of maths=>");
	scanf("%d",&maths);
	total=english+hindi+maths;
	printf("total marks=%d",total);
}
