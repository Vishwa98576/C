#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int i,x,I=0,u=0;
	char ch;
	printf("\nEnter the name=>");
	gets(name);
	
	x=strlen(name);
	for(i=0;i<x;i++)
	{
		ch=name[i];
		if(isupper(ch))
		{
			u++;
		}
		else if(islower(ch))
		{
			I++;
     	}
    }
     printf("\nUpper=>%d",u);
     printf("\nLower=>%d",I);
}
