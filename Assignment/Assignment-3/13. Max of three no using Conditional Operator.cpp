#include<stdio.h>
 int main()
 {
 	int a,b,c,max;
 	printf("Enter the 1st No.:");
 	scanf("%d",&a);
 	printf("Enter the 2nd No.:");
 	scanf("%d",&b);
 	printf("Enter the 3rd No.:");
 	scanf("%d",&c);
 	max=(a>b)?((a>c)?a:c):((b>c)?b:c);
 	printf("\nMaximum No. is %d",max);
 	return 0;
 }
