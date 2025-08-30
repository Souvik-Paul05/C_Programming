#include<stdio.h>
 int main()
 {
 	int i,n,s,sum=0,j;
 	printf("Enter The no. of Terms:");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)
 	{
 		s=0;
 		for (j=1;j<=i;j++)
 		{
 			s=s+j;
		 }
		sum=sum+s; 
	 }
 	printf("Sum:%d",sum);
 	return 0;
 }
