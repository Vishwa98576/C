#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
   	FILE *f2;
	char ch;
	f1=fopen("abc.txt","r");
	f2=fopen("pqr.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
		{
		}
		else
		{
			putc(ch,f2);
		}
	}
	printf("\nCopied");
	
	fclose(f1);
	fclose(f2);
	
}
