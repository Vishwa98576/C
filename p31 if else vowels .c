#include<stdio.h>
main()
{
	char op;
	printf("\nEnter the char=>");
	scanf("%c",&op);
	
	if(op=='a'||op=='A'||op=='e'||op=='E'||op=='i'||op=='I'||op=='o'||op=='O'||op=='u'||op=='U')
     {
     	printf("\nVowel");
	 }
	 else
	 {
	 	printf("\nOther letters");
	 }
}
