#include<stdio.h>
main()
{
	int cnt=0;
	int a[100]={11,5,70,11,65,9,35,2,49,11};
	int n=10,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%7==0)
		{
			printf("\n%d",a[i]);
			cnt++;
		}
	}
	printf("\nCount=%d",cnt);
}
