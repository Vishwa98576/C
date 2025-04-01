#include<stdio.h>
main()
{
	int qty;
	char opt;
	printf("\nFor pizza=rs300");
	printf("\nFor dosa=rs250");
	printf("\nFor sandwich=rs200");
	printf("\nFor burger=rs150");
	printf("\nEnter opt=>");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case'p':
		case'P':
			printf("\nYou ordered pizza");
			printf("\nEnter the qty=>");
			scanf("%d",&qty);
			printf("\nTotal amount=%d",qty*300);
		    break;
		case'd':
		case'D':
			printf("\nYou ordered dosa");
			printf("\nEnter the qty=>");
			scanf("%d",&qty);
			printf("\nTotal amount=%d",qty*250);
		    break;
		case's':
		case'S':
			printf("\nYou ordered sandwich");
			printf("\nEnter the qty=>");
			scanf("%d",&qty);
			printf("\nTotal amount=%d",qty*200);
		    break;	   
		case'b':
		case'B':
			printf("\nYou ordered burger");
			printf("\nEnter the qty=>");
			scanf("%d",&qty);
			printf("\nTotal amount=%d",qty*150);
		    break;    
		default:
			 printf("\nWrong");
	}
}
