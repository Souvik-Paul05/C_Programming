#include<stdio.h>
 int main()
 {
 	int i,n;
 	float avg,sum=0;
 	printf("Enter the range:");
 	scanf("%d",&n);
 	for(i=0;i<=n;i++)
 	{
 		sum=sum+i;
	 }
	avg=sum/n;
	printf("\nThe Summation is %.2f",sum);
	printf("\nThe Summation is %.2f",avg);
	return 0;
 }
