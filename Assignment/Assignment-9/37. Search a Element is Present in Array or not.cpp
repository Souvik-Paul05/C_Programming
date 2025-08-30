#include<stdio.h>
 int main()
 {
 	int arr[100],i,n,val,flag=0;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	printf("The Array Elements are: ");
	for(i=0;i<n;i++)
 	{
 		printf("%d ",arr[i]);
	 }
	printf("\nEnter the Element want to Search: ");
	scanf("%d",&val);
	for(i=0;i<n;i++)
 	{
 		if(arr[i]==val)
 		{
 			flag=1;
 			break;
		 }
	 }
	if(flag==1)
	{
		printf("\n%d is Present in the Array.",val);
	}
	else
	{
		printf("\n%d is not Present in the Array.",val);
	}
	return 0;
 }
