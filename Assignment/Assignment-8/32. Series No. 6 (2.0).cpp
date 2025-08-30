#include<stdio.h>
#include<math.h>
 int main()
 {
 	int i,n,x;
 	float t=1.0,sum=1.0,d;
 	printf("Enter the range:");
 	scanf("%d",&n);
 	printf("Enter the value of x:");
 	scanf("%d",&x);
 	for(i=1;i<=n;i++)
 	{
 		d=(2*i)*(2*i-1);
 		t=(t*x*x)/d;
 		if (i%2==0)
 		sum=sum+t;
 		else
 		sum=sum-t;
	 }
	 printf("sum:%.3f",sum);
	 return 0;
 }
