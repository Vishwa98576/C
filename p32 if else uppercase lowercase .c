#include<stdio.h>
main()
{
	char ch;
	printf("\nEnter the char=>");
	scanf("%c",&ch);
	
	if(isupper(ch))
	{
		printf("\nIt is in uppercase");
	}
	else if(islower(ch))
	{
		printf("\nIt is in lowercase");
	}
	else
	{
		printf("\nOther case");
	}
}
