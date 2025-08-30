#include<stdio.h>
 int main()
 {
 	int i,j,m,n;
 	int arr[10][10];
 	printf("Enter the No. of Rows of The Matrix: ");
 	scanf("%d",&m);
 	printf("Enter the No. of Columns of The Matrix: ");
 	scanf("%d",&n);
 	
 	printf("Enter the Elements of The Matrix:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&arr[i][j]);
		 }
	 }
	
	printf("The Matrix is:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ",arr[i][j]);
		 }
		printf("\n");
	 }
	 
	printf("The Transpose os the Matrix is:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ",arr[j][i]);       // This is the operation.
		 }
		printf("\n");
	 }
	return 0;
 }
