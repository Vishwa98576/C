#include<stdio.h>
main()
{
    int i;
	int a[5]={11,22,33,44,55};
	int *ptr;
	ptr=&a;
	for(i=0;i<5;i++)
	{
		printf("\n %d",*ptr);
		ptr++;
	}
}
