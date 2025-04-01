#include<stdio.h>
main()
{
	int monday,tuesday,wednesday,thursday,friday,total,avg;
	monday=39;
	tuesday=40;
	wednesday=35;
	thursday=42;
	friday=35;
	total=monday+tuesday+wednesday+thursday+friday;
	avg=total/5;
	printf("\nTotal=%d",total);
	printf("\nAverage=%d",avg);
}
