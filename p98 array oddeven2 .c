#include<stdio.h>
main()
{
	int cnt=0,cnt1=0,s;
	int a[100]={11,5,70,11,65,9,35,2,9,11};
	int n=10,i;
	s=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d is even",a[i]);
			cnt++;
		}
		else
		{
			printf("\n%d is odd",a[i]);
			cnt1++;
		}
		s=s+a[i];
	}
	printf("\nSum=%d",s);
	printf("\nCount=%d",cnt);
	printf("\nCount=%d",cnt1);
}
