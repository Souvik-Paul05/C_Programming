#include<stdio.h>
 int main()
 {
 	int arr[100],i,n;
 	int sum_odd=0,sum_even=0;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			sum_even=sum_even+arr[i];
		}
		else
		{
			sum_odd=sum_odd+arr[i];
		}
	}
 	printf("\nSum of Even Number: %d",sum_even);
 	printf("\nSum of Even Number: %d",sum_odd);
 	return 0;
 }
