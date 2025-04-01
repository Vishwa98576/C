#include<stdio.h>
main()
{
	int no1,no2,add,sub,mul,div,opt;
	printf("\nEnter no1=>");
	scanf("%d",&no1);
	printf("\nEnter no2=>");
	scanf("%d",&no2);
	printf("\nEnter 1 for add");
	printf("\nEnter 2 for sub");
	printf("\nEnter 3 for mul");
	printf("\nEnter 4 for div");
	printf("\nSelect any opt=>");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
			   printf("\nAdd=%d",no1+no2);
			   break;
		case 2:
			   printf("\nSub=%d",no1-no2);
			   break;	 
		case 3:
			   printf("\nMul=%d",no1*no2);
			   break;
		case 4:
			   printf("\nDiv=%d",no1/no2);
			   break;	 
			default:
			         printf("\nWrong");  	     
	}
}
