#include<stdio.h>
main()
{
	int i,cnt=0,cnt1=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
		printf("\n%d is even",i);
		cnt++;
		cnt1++;	
		}
		else
		{
			printf("\n%d is odd",i);
		}
	}
	 printf("\nCount=%d",cnt);
	 printf("\nCount1=%d",cnt1);
}
