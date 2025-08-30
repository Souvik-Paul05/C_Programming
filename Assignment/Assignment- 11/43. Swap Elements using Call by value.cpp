#include<stdio.h>

 void swap(int x,int y)
 {
 	int t;
 	t=x;
 	x=y;
 	y=t;
 	printf("\nAfter Swapping: a=%d and b=%d",x,y);
 }
 int main()
 {
 	int a,b;
 	printf("Enter the Two Elements:");
 	scanf("%d%d",&a,&b);
 	printf("Before Swapping: a=%d and b=%d",a,b);
 	swap(a,b);
 	return 0;
 }
