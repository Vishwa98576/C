#include<stdio.h>
struct stu
{
int sno;
char sname[200];
int h,e;
};
main()
{
struct stu s1,s2,s3;

printf("\n Enter Roll Number=>");
scanf("%d",&s1.sno);
fflush(stdin);
printf("\n Enter Student Name=>");
gets(s1.sname);
printf("\n Enter Hindi Marks=>");
scanf("%d",&s1.h);
printf("\n Enter English Marks=>");
scanf("%d",&s1.e);

printf("\n Enter Roll Number=>");
scanf("%d",&s2.sno);
fflush(stdin);
printf("\n Enter Student Name=>");
gets(s2.sname);
printf("\n Enter Hindi Marks=>");
scanf("%d",&s2.h);
printf("\n Enter English Marks=>");
scanf("%d",&s2.e);

printf("\n Enter Roll Number=>");
scanf("%d",&s3.sno);
fflush(stdin);
printf("\n Enter Student Name=>");
gets(s3.sname);
printf("\n Enter Hindi Marks=>");
scanf("%d",&s3.h);
printf("\n Enter English Marks=>");
scanf("%d",&s3.e);

    printf("\ns1's sno= %d sname  = %s h =%d e=%d" ,s1.sno,s1.sname,s1.h,s1.e);
	printf("\ns2's sno = %d sname = %s h =%d e=%d",s2.sno,s2.sname,s2.h,s2.e);
	printf("\ns3's sno = %d sname = %s h =%d e=%d",s3.sno,s3.sname,s3.h,s3.e);	
}

