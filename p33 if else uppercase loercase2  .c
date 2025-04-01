#include<stdio.h>
main()
{
	char ch;
	printf("\nEnter the char=>");
	scanf("%c",&ch);
	if(isupper(ch))
	{
		printf("%c",tolower(ch));
	}
	else if(islower(ch))
	{
		printf("%c",toupper(ch));
	}
	else
	{
		printf("\nOther case");
	}
}
