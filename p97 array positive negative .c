#include<stdio.h>
main()
{
	int cnt=0,cnt1=0;
	int a[100]={11,-5,70,-11,65,9,35,-2,9,-11};
	int n=10,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("\n%d is positive",a[i]);
			cnt++;
		}
		else
		{
			printf("\n%d is negative",a[i]);
			cnt1++;
		}
	}
	printf("\nCount=%d",cnt);
	printf("\nCount=%d",cnt1);
}
