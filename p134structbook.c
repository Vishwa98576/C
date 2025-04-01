#include<stdio.h>
#define N 100
struct book
{
	int bid;
	char bname[200];
	int bprice;
};

main()
{
	struct book b[N];
	int n,i;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter bid =>");
	scanf("%d",&b[i].bid);
	
	fflush(stdin);
	printf("\nEnter book name =>");
	gets(b[i].bname);
	
	printf("\nEnter bprice =>");
	scanf("%d",&b[i].bprice);
	}

	printf("\nBid\tBookname\tBookprice");
	printf("\n======================================");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t%s\t%d",b[i].bid,b[i].bname,b[i].bprice);
	}
	printf("\n======================================");
}
