#include<stdio.h>
#include<string.h>
main()
{
	
	FILE *f1;
	char ch;
	int c=0,i=0,u=0;
	f1=fopen("abc.txt","r");

	while(ch!=EOF)
	{
		ch=getc(f1);
		if(isupper(ch))
		{
			u++;
		}
		else if(islower(ch))
		{
			i++;
     	}
		{
			c++;
		}
	}
	printf("\nCount = %d",c);
}

