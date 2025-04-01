#include<stdio.h>
main()
{
	int a[100]={11,5,70,11,65,9,35,2,9,11};
	int n=10,i;
	int s=0;
	for(i=0;i<=n;i++)
	{
		printf("\n%d",a[i]);
		s=s+a[i];
	}
	printf("\nSum=%d",s);
}
