#include<stdio.h>
main()
{
	int no;
	int rev=0,i,f,y,z;
	printf("\nEnter a no=>");
	scanf("%d",&no);
	z=no;
	while(no>0)
	
	{
		y=no%10;
		f=1;
		for(i=1;i<=y;i++) 
		{
			f=f*i;
		}
		rev=rev+f;
		no=no/10;
	}
	printf("\n rev=%d no=%d",rev,z);
	if(rev==z)
	{
		printf("\nKrishnamurthy no");
	}
	else
	{
		printf("\nNot krishnamurthy no");
	}
}
