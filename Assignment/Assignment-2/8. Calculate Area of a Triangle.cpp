#include<stdio.h>
#include<math.h>
 int main()
 {
 	float a,b,c,area,S,X;
 	printf("Enter the 1st side length:");
 	scanf("%f",&a);
 	printf("Enter the 2nd side length:");
 	scanf("%f",&b);
 	printf("Enter the 3rd side length:");
 	scanf("%f",&c);                      //[Area=sqrt(S*(S-a)*(S-b)*(S-c))), where S=(a+ b+ c)/2, S is semi-perimeter] 
 	S=(a+b+c)/2;
 	X=S*(S-a)*(S-b)*(S-c);
 	area=sqrt(X);
 	// Together, area=sqrt((S*(S-a)*(S-b)*(S-c)));
 	printf("\nThe area of the Triangle is %.2f",area);
 	return 0;
 }
