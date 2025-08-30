#include<stdio.h>
 int main()
 {
 	int r;
 	float area,pi;
 	pi=3.14;
 	printf("Enter the Radius of the Circle: ");
 	scanf("%d",&r);
 	area=pi*r*r;
 	printf("Area of the Circle: %.2f /metre Square.",area);
 	return 0;
 }
