#include<stdio.h>
#include<math.h>
 int main()
 {
 	float x1,y1,x2,y2;
 	float D,X,Y;
 	printf("Enter the co-ordinates of the 1st point:\n");
 	scanf("%f%f",&x1,&y1);
 	printf("Enter the co-ordinates of the 2nd point:\n");
 	scanf("%f%f",&x2,&y2);
 	X=pow((x2-x1),2);
 	Y=pow((y2-y1),2);
 	D=sqrt(X+Y);
	// Together, D=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));                               
 	printf("\nThe distance between two points is %.2f",D);
 	return 0;
 }
