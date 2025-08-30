#include<stdio.h>
 int main()
 {
 	int i,n,r,sum=0;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	for(i=1;i<n;i++)
 	{
 		if(n%i==0)
 		{
 			sum=sum+i;
		 }
	 }
	if(sum==n)
	{
		printf("\n%d is a Perfect Number.",n);
	}
	else
	{
		printf("\n%d is not a Perfect Number.",n);
	}
	return 0;
 }
