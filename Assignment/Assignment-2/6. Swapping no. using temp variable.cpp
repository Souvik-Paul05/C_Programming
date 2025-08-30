#include<stdio.h>
 int main()
 {
 	int a,b,t;
 	printf("a=");
 	scanf("%d",&a);
 	printf("b=");
 	scanf("%d",&b);
 	t=a;
 	a=b;
 	b=t;
 	printf("After Swapping,\na=%d\nb=%d",a,b);
 	return 0;
 }
