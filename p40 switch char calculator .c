#include<stdio.h>
main()
{
	int no1,no2;
	char opt;
	printf("\nEnter '+' for add");
	printf("\nEnter '-' for sub");
	printf("\nEnter '*' for mul");
	printf("\nEnter '/' for div");
	printf("\nSelect any opt=>");
	scanf("%c",&opt);
	
	switch(opt)
	{
		case'+':
				printf("\nEnter no1=>");
            	scanf("%d",&no1);
            	printf("\nEnter no2=>");
	            scanf("%d",&no2);
	            printf("\nFor'+'=%d",no1+no2);
	            break;
	    case'-':
	    	    printf("\nEnter no1=>");
            	scanf("%d",&no1);
            	printf("\nEnter no2=>");
	            scanf("%d",&no2);
	            printf("\nFor'-'=%d",no1-no2);
	            break;
	    case'*':
	    	    printf("\nEnter no1=>");
            	scanf("%d",&no1);
            	printf("\nEnter no2=>");
	            scanf("%d",&no2);
	            printf("\nFor'*'=%d",no1*no2);
	            break;
	    case'/':
	    	    printf("\nEnter no1=>");
            	scanf("%d",&no1);
            	printf("\nEnter no2=>");
	            scanf("%d",&no2);
	            printf("\nFor'/'=%d",no1/no2);
	            break;
	        default:
	        	    printf("\nWrong");
	}
}
