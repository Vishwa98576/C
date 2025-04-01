#include<stdio.h>
#define N 100
struct student
{
	int sid;
	char sname[200];
	int shindi,seng;
};

main()
{
	struct student s[N];
	int n,i,cf,cp,op,opt,marks;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter sid =>");
	scanf("%d",&s[i].sid);
	
	fflush(stdin);
	printf("\nEnter name =>");
	gets(s[i].sname);
	
	printf("\n Enter Hindi Marks=>");
    scanf("%d",&s[i].shindi);
    printf("\n Enter English Marks=>");
    scanf("%d",&s[i].seng);
	}

	printf("\nSid\tStudentname\tShindi\tSeng");
	printf("\n======================================");
	for(i=0;i<n;i++)
	{
		if(s[i].shindi+s[i].seng>30)
	{
	printf("\n%d\t%s\t%d\t%d\tPass",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
	}
	 else
	 {
	  printf("\n%d\t%s\t%d\tFail",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
     }
     }
	printf("\n======================================");
    printf("\nFail=%d",cf);
	printf("\nPass=%d",cp);
	
	printf("\n 1 for students who passed");
	printf("\n 2 for students who failed");
	printf("\n 3 for all");
	printf("\nSelect opt=>");
	scanf("%d",&opt);
	
	for(i=0;i<n;i++)
	{
		if(op==1)
		{
			if(marks>=25)
			{
			printf("\n%d\t%s\t%d %2f Pass",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
		    }
		}
		if(op==2)
		{
			if(marks<=15)
			{
			printf("\n%d\t%s\t%d %2f Fail",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
			}
		}
		if(op==3)
		{
			printf("\n%d\t%s\t%d %2f All",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
		}
	}
		 
}
