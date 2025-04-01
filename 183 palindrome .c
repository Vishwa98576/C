#include<stdio.h>
main()
{
	int no;
	int rev=0,y,z;
	printf("\nEnter a no=>");
	scanf("%d",&no);
	
	while(no>0)
	
	{
		y=no%10; 
		rev=rev*10+y;
		no=no/10;
	}
	printf("\n rev=%d no=%d",rev,z);
	if(rev==z)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("\nNot palimdrome");
    }
}
