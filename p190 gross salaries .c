#include<stdio.h>
main()
{
	float gross_salary,basic,da,hra,ma,itc,va,net_salary,pf;
	 
	 printf("\nEnter basic value=>");
	 scanf("%f",&basic);
	 
	 basic=basic*0.52;
	 da=basic*51/100;
	 hra=basic*10/100;
	 ma=basic*10/100;
	 itc=basic*5/100;
	 va=basic*10/100;
	 pf=1000;
	 
	 gross_salary=basic+da+hra+ma+itc+va;
	 net_salary=gross_salary-pf;
	 
	 printf("\nGross salary=>%2f",gross_salary);
	 printf("\nNet salary=%2f",net_salary);
}
