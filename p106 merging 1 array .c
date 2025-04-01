#include<stdio.h>
main()
{
	int i,n=9,k,m;
	int a[9]={12,24,32,41,51,16,71,81,90};
	int b[6];
	int c[9];
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[k]=a[i];
			k++;
		}
		else
		{
			c[m]=a[i];
			m++;
		}
	}
	printf("\nOdd values");
	for(i=0;i<k;i++)
	{
		printf("\n%d",b[i]);
	}
	printf("\nEven values");
	for(i=0;i<m;i++)
	{
		printf("\n%d",c[i]);
	}
}
