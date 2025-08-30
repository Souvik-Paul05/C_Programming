#include<stdio.h>
 int main()
 {
 	int i,j,m,n;
 	int first[10][10],second[10][10],sum[10][10];
 	printf("Enter the No. of Rows and Columns of Two Matrices: ");
 	scanf("%d%d",&m,&n);
 	
 	printf("Enter the Elements of 1st Matrix:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&first[i][j]);
		 }
	 }
	printf("Enter the Elements of 2nd Matrix:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&second[i][j]);
		 }
	 }
	
	for(i=0;i<m;i++)        //This is the operation.
 	{
 		for(j=0;j<n;j++)
 		{
 			sum[i][j]=first[i][j]+second[i][j];
		 }
	 }
	 
	printf("The Sum of Two Matrix:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d ",sum[i][j]);
		 }
		printf("\n");
	 }
	return 0;
 }
