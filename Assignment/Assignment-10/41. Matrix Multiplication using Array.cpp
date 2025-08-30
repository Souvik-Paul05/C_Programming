#include<stdio.h>
 int main()
 {
 	int i,j,m,n,p,q,k,sum=0;
 	int first[10][10],second[10][10],mult[10][10];
 	
 	printf("Enter the No. of Rows and Columns of 1st Matrices: ");
 	scanf("%d%d",&m,&n);
 	printf("Enter the Elements of 1st Matrix:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			scanf("%d",&first[i][j]);
		 }
	 }
	
	printf("Enter the No. of Rows and Columns of 2nd Matrices: ");
 	scanf("%d%d",&p,&q);
 	
 	if(n != p)
 	{
 		printf("Matrix Multiplication is not Possible.");
	 }
	else
	{
		printf("Enter the Elements of 2nd Matrix:\n");
 		for(i=0;i<p;i++)
 		{
 			for(j=0;j<q;j++)
 			{
 				scanf("%d",&second[i][j]);
		 	}
	 	}
	 	
	 	for(i=0;i<m;i++)     // This is the operation.
	 	{
	 		for(j=0;j<q;j++)
	 		{
	 			for(k=0;k<p;k++)
	 			{
	 				sum=sum+first[i][k]*second[k][j];
				 }
				mult[i][j]=sum;
				sum=0;
			 }
		 }
		 
		printf("Matrix multiplication is:\n");
		for(i=0;i<m;i++)
 		{
 			for(j=0;j<q;j++)
 			{
 				printf("%d ",mult[i][j]);
		 	}
		 	printf("\n");
	 	}
	}
	return 0;
 }
