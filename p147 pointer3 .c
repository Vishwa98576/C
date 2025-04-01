#include<stdio.h>
main()
{
	int a=20;
	int *b;
	b=&a;
	printf("\n a=%d *b=%d",a,*b);
	
	*b=100;
	printf("\n a=%d *b=%d",a,*b);
	
	a=77;
	printf("\n a=%d *b=%d",a,*b);
	
	*b=50;
	printf("\n a=%d *b=%d",a,*b);
}
