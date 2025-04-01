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
		putc(ch,f2);
	}
	printf("\nCopied");
	
	fclose(f1);
	fclose(f2);
	
}

/*
1->2 copy spaceX
1->2 copy Vowel X

1->2 Vowel
 ->3 Other
 
1->2 Upper
 ->3 lower


*/
