#include<stdio.h>
main()
{
	int a[100]={11,-5,70,-19,65,9,35,-2,7,4};
	int n=10,i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
				printf("\n%d is positive",a[i]);
		}
	}
}
