#include<stdio.h>
 int main()
 {
 	int arr[100],i,n;
 	int val,pos;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("Enter the New Element want to Insert: ");
	scanf("%d",&val);
	printf("Enter the Position Where to Insert: ");
	scanf("%d",&pos);
	
	for(i=n-1;i>=pos-1;i--)          // This is the Operation.
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1]=val;
	
	printf("The Resultant Array:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }
