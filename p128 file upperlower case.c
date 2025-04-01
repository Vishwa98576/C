#include<stdio.h>
#include<string.h>
main()
{
	FILE *f1;
   	FILE *f2;
   	FILE *f3;
	char ch;
	int i=0,u=0;
	f1=fopen("abc.txt","r");
	f2=fopen("pqr1.txt","w");
	f3=fopen("pqr2.txt","w");
	
	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			putc(ch,f2);
		}
		else if(islower(ch))
		{
			putc(ch,f3);
		}
	}
	printf("\nCopied");
	
	fclose(f1);
	fclose(f2);
	fclose(f3);
}
