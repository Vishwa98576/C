#include<stdio.h>
#define N 100
#define PASSMARK 45
struct student
{
	int sid;
	char sname[200];
	int shindi,seng;
};

main()
{
	struct student s[N];
	int n,i,cnt=0;
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
	cnt++;
	}
	 else
	 {
	  printf("\n%d\t%s\t%d\tFail",s[i].sid,s[i].sname,s[i].shindi,s[i].seng);
     }
     }
	printf("\n======================================");
	printf("\nTotal pass count=%d",cnt);
}
