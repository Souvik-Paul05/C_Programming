#include<stdio.h>
 int main()
 {
 	int arr[100],i,n,j,flag=0;
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
	for(i=0,j=n-1;j>i;i++,j--)
	{
		if(arr[i] != arr[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\nArray Elements are in Palindrome.");
	}
	else
	{
		printf("\nArray Elements are not in Palindrome.");
	}
	return 0;
 }
