#include<stdio.h>
#define N 100
struct employee
{
	int eid;
	char ename[200];
	int esalary;
};

main()
{
	struct employee e[N];
	int n,i,salary;
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	printf("\nEnter eid =>");
	scanf("%d",&e[i].eid);
	
	fflush(stdin);
	printf("\nEnter employee name =>");
	gets(e[i].ename);
	
	printf("\nEnter employee salary =>");
	scanf("%d",&e[i].esalary);
	}

	printf("\nEid\tEmployeename\tEmployeesalary");
	printf("\n======================================");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t%s\t%d",e[i].eid,e[i].ename,e[i].esalary);
	}
	printf("\n======================================");
	if(salary>=20000)
	{
		printf("\nGood salary");
	}
	else 
	{
		printf("\nAvg salary");
	}
}
