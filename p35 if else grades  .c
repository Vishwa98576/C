#include<stdio.h>
main()
{
	int eng,hindi,maths,total;
	printf("\nEnter marks of eng=>");
	scanf("%d",&eng);
	printf("\nEnter marks of hindi=>");
	scanf("%d",&hindi);
	printf("\nEnter marks of maths=>");
	scanf("%d",&maths);
	total=eng+hindi+maths;
	printf("\nTotal marks=%d",total);
	
	if(total>=100)
	{
		printf("\nYou got A grade");
	}
	else if(total>=80)
	{
		printf("\nYou got B grade");
	}
	else if(total>=60)
	{
		printf("\nYou got C grade");
	}
	else if(total>=40)
	{
	     printf("\nYou have failed");	
	}
}
