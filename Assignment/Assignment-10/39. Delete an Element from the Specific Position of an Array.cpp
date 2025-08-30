#include<stdio.h>
 int main()
 {
	int arr[100],i,n,pos;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("Enter the Position Where to Delete an Element: ");
	scanf("%d",&pos);
	
	for(i=pos-1;i<n;i++)          // This is the Operation.
	{
		arr[i]=arr[i+1];
	}
	
	printf("The Resultant Array:\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
 }
