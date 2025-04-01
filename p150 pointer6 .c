#include<stdio.h>
void swap (int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
main()
{
   int x=20,y=2;
   printf("\n x=%d y=%d",x,y);
   swap(&x,&y);
   printf("\n x=%d y=%d",x,y);
}

