#include<stdio.h>
main()
{
	int i,limit,divisor,cnt=0;
	printf("\nEnter the limit=>");
	scanf("%d",&limit);
	printf("\nEnter the divisor=>");
	scanf("%d",&divisor);
	
	for(i=1;i<=limit;i++);
	{
		if(i%divisor==0)
		{
			printf("\n%d",i);
			cnt++;
		}
	}
	printf("\nCount=%d",cnt);
}
