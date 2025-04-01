#include<stdio.h>
main()
{
	int a=5;
	int *b;
	b=&a;
	printf("\n a=%d b=%d",a,b);
	printf("\n a=%d &a=%d",a,&a);
	printf("\n b=%d *b=%d &b=%d",b,*b,&b);
	
}
