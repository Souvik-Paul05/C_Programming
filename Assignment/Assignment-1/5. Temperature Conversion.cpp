#include<stdio.h>
 int main()
 {
 	float C,F;
 	printf("Enter the temperature in celsius:");
 	scanf("%f",&C);
 	F=(9*C/5)+32;
 	printf("Fahrenheit Temperature:%.2f",F);
 	printf("\n\nEnter the temperature in fahrenheit:");
 	scanf("%f",&F);
 	C=(5*(F-32))/9;
 	printf("Celcius Temperature:%.2f",C);
 	return 0;
 }
