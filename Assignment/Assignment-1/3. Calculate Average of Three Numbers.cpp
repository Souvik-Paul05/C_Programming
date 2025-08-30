#include<stdio.h>
 int main()
 {
 	int a,b,c;
	float avg;
 	printf("Enter the 1st No.:");
 	scanf("%d",&a);
 	printf("Enter the 2nd No.:");
 	scanf("%d",&b);
 	printf("Enter the 3rd No.:");
 	scanf("%d",&c);
 	avg=(a+b+c)/3;
 	printf("\nThe Average is %.2f",avg);
 	return 0;
 }
