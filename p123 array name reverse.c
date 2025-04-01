#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int x,i;
	char ch;
	printf("\nEnter the name=>");
	gets(name);
	x=strlen(name);
	for(i=x-1;i>=0;i--)
	{
		ch=name[i];
		printf("%c",ch);
	}
}
