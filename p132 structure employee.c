#include<stdio.h>
struct employee
{
	int eid;
	char ename[200];
	int esalary;
};

main()
{
   struct employee e1,e2,e3;
   
printf("\n Enter Employee id=>");
scanf("%d",&e1.eid);
fflush(stdin);
printf("\n Enter Employee Name=>");
gets(e1.ename);
printf("\n Enter Employee Salary=>");
scanf("%d",&e1.esalary);

printf("\n Enter Employee id=>");
scanf("%d",&e2.eid);
fflush(stdin);
printf("\n Enter Employee Name=>");
gets(e2.ename);
printf("\n Enter Employee Salary=>");
scanf("%d",&e2.esalary);

printf("\n Enter Employee id=>");
scanf("%d",&e3.eid); 
fflush(stdin);
printf("\n Enter Employee Name=>");
gets(e3.ename);
printf("\n Enter Employee Salary=>");
scanf("%d",&e3.esalary);


    printf("\nE1's eid = %d ename= %s esalary = %d",e1.eid,e1.ename,e1.esalary);
	printf("\nE2's eid = %d ename = %s esalary = %d",e2.eid,e2.ename,e2.esalary);
	printf("\nE3's eid = %d ename = %s esalary = %d",e3.eid,e3.ename,e3.esalary);	
}
