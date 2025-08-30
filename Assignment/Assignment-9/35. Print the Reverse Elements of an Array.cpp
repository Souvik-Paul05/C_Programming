#include<stdio.h>
 int main()
 {
 	int arr[100],i,n;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("\nThe Array Elements are: ");
	for(i=0;i<n;i++)
 	{
 		printf("%d ",arr[i]);
	 }
	printf("\nThe Reverse Array Elements are: ");
	for(i=n-1;i>=0;i--)
 	{
 		printf("%d ",arr[i]);
	 }
	return 0;
 }
