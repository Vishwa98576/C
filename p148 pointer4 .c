#include<stdio.h>
main()
{
	int a=20,b=2;
	int *ptra,*ptrb;
	ptra=&a;
	ptrb=&b;
	printf("\nAdd=%d",*ptra+*ptrb);
	printf("\nSub=%d",*ptra-*ptrb);
	printf("\nMul=%d",*ptra**ptrb);
	printf("\nDiv=%d",*ptra/ *ptrb);
}
