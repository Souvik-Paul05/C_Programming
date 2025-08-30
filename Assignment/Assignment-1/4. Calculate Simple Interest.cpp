#include<stdio.h>
 int main()
 {
 	float p,r,t,I;
 	printf("Enter the Principle Amount:");
 	scanf("%f",&p);
 	printf("Enter the rate of interest:");
 	scanf("%f",&r);
 	printf("Enter the time(Year):");
 	scanf("%f",&t);
 	I=(p*r*t)/100;
 	printf("\nSimple Interest is %.2f",I);
 	return 0;
 }
