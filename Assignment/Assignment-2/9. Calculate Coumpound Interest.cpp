#include<stdio.h>
#include<math.h>
 int main()
 {
 	float p,r,t,CI,x;
 	printf("Enter the Principle Amount:");
 	scanf("%f",&p);
 	printf("Enter the rate of interest:");
 	scanf("%f",&r);
 	printf("Enter the time(Year):");
 	scanf("%f",&t);
 	x=1+r/100;
 	CI=p*(pow(x,t));
 	// Together, CI=p*(pow((1+r/100),t));
 	printf("\nThe Compound Interest:%.2f",CI);
 	return 0;
 }
