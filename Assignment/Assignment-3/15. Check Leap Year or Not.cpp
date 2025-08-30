#include<stdio.h>
 int main()
 {
 	int year;
 	printf("Enter the year:");
 	scanf("%d",&year);
	if(year%400==0 || (year%4==0 && year%100 != 0))
	{
		printf("\nThe year %d is a Leap-Year.",year);
	}
	else
	{
		printf("\nThe year %d is not a Leap-Year.",year);
	}
	return 0;
 }
