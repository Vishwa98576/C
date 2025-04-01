#include<stdio.h>
main()
{
	float meter,centimeter;
	printf("\nEnter in meter=>");
	scanf("%f",&meter);
	centimeter=meter*100;
	printf("\nLength in centimeter=.%2f",centimeter);
}
