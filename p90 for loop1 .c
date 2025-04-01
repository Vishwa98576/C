#include<stdio.h>
main()
{
	int i;
	for(i=5;i<=10;i++)
	{
		if(i==5||i==7)
		{
			break;
		}
		printf("\n%d",i);
	}
}
