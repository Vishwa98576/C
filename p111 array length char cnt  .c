#include<stdio.h>
main()
{
	char ch;
	int x,i;
	int c=0;
	char name[200];
	printf("\nEnter name=>");
	gets(name);
	x=strlen(name);
	printf("\nLength=%d",x);
	for(i=0;i<x;i++)
	{
		ch=name[i];
	    if(ch==' ')
	    {
	    	c++;
		}
	}
}
