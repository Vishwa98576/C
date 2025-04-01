#include<stdio.h>
main()
{
	int n1,cnt=0;
	int a[100]={11,-5,70,-19,65,9,35,-2,7,4};
	int n=10,i;
	printf("\nEnter a no=>");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(n1<a[i])
		{
			printf("\n%d is greater no",a[i]);
			cnt++;
		}
	}
	if(cnt==0)
	{
		printf("\nSorry can't tell");
	}
	else
	{
		printf("\nCount=%d",cnt);
	}
}
