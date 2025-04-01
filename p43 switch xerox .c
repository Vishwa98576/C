#include<stdio.h>
main()
{
	int qty;
	char opt;
	printf("\nFor xerox");
	printf("\nFor typed pages");
	printf("\nEnter option=>");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case'x':
		case'X':
			printf("\nEnter the qty of xerox=>");
			scanf("%d",&qty);
			
		if(qty<50)
		{
			printf("\nTotal amount of xerox=%d",qty*5);
		}
		else
	   {
		printf("\nTotal amount of xerox=%d",qty*3);
       }
       break;
       
       case't':
	   case'T':
			printf("\nEnter the qty of typed pages=>");
			scanf("%d",&qty);
			
		if(qty<50)
		{
			printf("\nTotal amount of typed pages=%d",qty*25);
		}
		else
	   {
		printf("\nTotal amount of typed pages=%d",qty*20);
       }
       break;
       default:
       	     printf("\nWrong");
    }
}
