#include<stdio.h>
main()
{
	int i;
	i=1;
	while(i<=10)
	if(i%2==0)
	{
		printf("\n%d is even",i);
		i++;
	}
	else
	{
		printf("\n%d is odd",i);
		i++;
	}
}
