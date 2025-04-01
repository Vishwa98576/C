#include<stdio.h>
main()
{
	int a[100]={11,5,70,11,65,9,35,2,9,11};
	int n=10,i;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("\n%d is even",a[i]);
		}
		else
		{
			printf("\n%d is odd",a[i]);
		}
	}
}
