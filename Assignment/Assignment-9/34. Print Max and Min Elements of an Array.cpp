#include<stdio.h>
 int main()
 {
 	int arr[100],i,n;
 	int max,min;
 	printf("Enter the Array Size:");
 	scanf("%d",&n);
 	printf("Enter the Array Elements:\n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&arr[i]);
	 }
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("\nMaximum Element: %d",max);
	printf("\nMinimum Element: %d",min);
	return 0;
 }
