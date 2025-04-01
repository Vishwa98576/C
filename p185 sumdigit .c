#include<stdio.h>
main()
{
	int no;
	int sum=0,y,z;
	printf("\nEnter a no=>");
	scanf("%d",&no);
	
	while(no>0)
	
	{
		y=no%10; 
		sum=sum+y;
		no=no/10;
	}
	printf("\n sum=%d no=%d",sum,z);
}
