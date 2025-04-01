#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	int i,x,c=0;
	char ch;

    printf("\nEnter the name=>");
    gets(name);
    
    x=strlen(name);
    
    for(i=0;i<x;i++)
    {
    	ch=name[i];
    	if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='e'||ch=='E'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    	{
    		c++;
    	}
    }
    	 if(c==0)
    	 {
    	 	printf("\nNo vowels in the name");
    	 }
    	 else{
    	    printf("\nTotal vowels=>%d",c);
    	}
}
	

