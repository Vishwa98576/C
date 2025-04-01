#include<stdio.h>
main()
{
	int n1,c=0;
	int a[100]={11,-5,70,-19,65,9,35,-2,7,4};
	int n=10,i;
	print("\nEnter a no=>");
	scanf("%d",&n1);
	for(i=0;i<n;i++)
	{
		if(n1==a[i])
		{
			c++;
		}
	}
	if(c==0)
	{
		printf("\nSorry can't print",n1);
	}
	else
	{
		printf("\nTimes=%d",c);
	}
}
