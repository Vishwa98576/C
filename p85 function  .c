#include<stdio.h>
void add()
{
	int no1,no2,op;
	{
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nAdd=%d",no1+no2);
	}
	void max2()
	{
		int no1,no2,op;
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		
		if(no1>no2)
		{
			printf("\nNo1 is greater");
		}
		else
		{
			printf("\nNo2 is greater");
		}
	}
	void oddeven()
	{
		int no;
		printf("\nEnter no=>");
		scanf("%d",&no);
		if(no%2==0)
		{
			printf("\nNo1 is even");
		}
		else
		{
			printf("\nNo2 is odd");
		}
	}
	void positivenegative()
	{
		int no;
		printf("\nEnter no=>");
		scanf("%d",&no);
		
		if(no>0)
		{
			printf("\nNo is positive");
		}
		else
		{
			printf("\nNo is negative");
		}
	}
	void areaoftriangle()
	{
		float h,b,a;
		printf("\nEnter h=>");
		scanf("%f",&h);
		printf("\nEnter b=>");
		scanf("%f",&b);
		a=0.5*h*b;
		printf("\narea of triangle=%2f",a);
	}
	void areaofcircle()
	{
		float r,a;
		printf("\nEnter r=>");
		scanf("%f",&r);
		a=3.14*r*r;
		printf("\nArea of circle=%2f,a");
	}
	void max3()
	{
		int no1,no2,no3,op;
		printf("\nEnter no1=>");
		scanf("%d",&no1);
		printf("\nEnter no2=>");
		scanf("%d",&no2);
		printf("\nEnter no3=>");
		scanf("%d",&no3);
		if(no1>no2&&no3)
		{
			printf("\nNo1 is greater");
		}
		else if(no2>no3&&no1)
		{
			printf("\nNo2 is greater");
		}
		else if(no3>no2&&no1)
		{
			printf("\nNo3 is greater");
		}
	}
	void cube()
	{
		int no;
		printf("\nEnter a no=>");
		scanf("%d",&no);
		printf("\nCube=%d",no*no*no);
	}
	main()
	{
	
		add();
		max2();
		oddeven();
		positivenegative();
		areaoftriangle();
		areaofcircle();
		max3();
		cube();
}
}

