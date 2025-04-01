#include<stdio.h>
main()
{
	int n1=5,n2=3,i;
	int a[5]={1,2,3,4,5};
	int b[3]={7,8,9};
	int c[8];
	for(i=0;i<n1;i++);
	{
		c[i]=a[i];
	}
	for(i=0;i<n2;i++)
	{
		c[i+n1]=b[i];
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("\n%d",c[i]);
	}
}
