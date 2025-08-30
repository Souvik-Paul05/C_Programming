#include<stdio.h>
 int main()
 {
    int year;
    printf("ENTER THE YEAR:");
    scanf("%d",&year);
    if (year%400==0)
    	printf("The year %d is a Leap-Year.",year);
    else if (year%100==0 && year%4==0)
    	printf("The year %d is not a Leap-Year.",year);
    else if (year%4==0)
    	printf("The year %d is a Leap-Year.",year);
    else
    	printf("The year %d is not a Leap-Year.",year);
	return 0;
 }
