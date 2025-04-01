#include<stdio.h>
main()
{
	int mon,tues,wed,thurs,fri,total;
	printf("\nEnter temp of mon=>");
	scanf("%d",&mon);
	printf("\nEnter temp of tues=>");
	scanf("%d",&tues);
	printf("\nEnter temp of wed=>");
	scanf("%d",&wed);
	printf("\nEnter temp of thurs=>");
	scanf("%d",&thurs);
	printf("\nEnter temp of fri=>");
	scanf("%d",&fri);
	total=mon+tues+wed+thurs+fri;
	printf("total temp=%d",total);
	
}
