#include<stdio.h>
main()
{
	int i,cnt=0,cnt1=0,s;
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
		printf("\n %d is even",i);
		cnt++;
		s=s+i;
     	}
	
	else
	{
		printf("\n %d is odd",i);
		cnt1++;
		s=s+i;
    }
	}
	printf("\nCount=%d",cnt);
	printf("\nSum=%d",s);
	printf("\nCount=%d",cnt);
	printf("\nSum=%d",s);
}
