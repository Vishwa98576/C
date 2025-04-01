#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
	char ch;
	f1=fopen("abc.txt","r");

	while(ch!=EOF)
	{
		ch=getc(f1);
		printf("%c",ch);
	}
}
