#include<stdio.h>
main()
{
	int i;
	i=1;
	do
	{
		if(i%2!=0)
		{
			printf("\n%d is odd",i);
		}
		i++;
	}
	while(i<=10);
	
	i=1;
	do
	{
		if(i%2==0)
		{
			printf("\n%d is even",i);
		}
		i++;
	}
	while(i<=10);
}
