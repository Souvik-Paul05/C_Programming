#include<stdio.h>
#include<math.h>
 int main()
 {
 	int i,n,x,j,fact;
 	float sum=1;
 	printf("Enter The Range:");
 	scanf("%d",&n);
 	printf("Enter The Value of x:");
 	scanf("%d",&x);
 	for (i=1;i<=n;i++)
 	{
 		fact=1;
 		for(j=i*2;j>=1;j--)
 		{
 			fact=fact*j;
		 }
		if (i%2==0)
		sum=sum+(pow(x,2*i)/fact);
		else
		sum=sum-(pow(x,2*i)/fact);
	 }
	printf("sum:%.3f",sum);
	return 0;
 }
