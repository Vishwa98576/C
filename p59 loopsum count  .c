#include<stdio.h>
main()
{
	int i,cnt=0,s,sum;
	for(i=1;i<=30;i++)
	{
		if(i%7==0)
		{
			printf("\n%d",i);
			cnt++;
			s=s+i;
		}
	}
	printf("\nCount=%d",cnt);
	printf("\nSum=%d",sum);
}
