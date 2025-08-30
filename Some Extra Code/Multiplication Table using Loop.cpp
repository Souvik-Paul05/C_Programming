#include<stdio.h>
 int main()
 {
 	int i,n,mult;
 	printf("Enter the Table No. to Print: ");
 	scanf("%d",&n);
 	for(i=1;i<=10;i++)
 	{
 		mult=n*i;
 		printf("\n%d * %d = %d",n,i,mult);
	 }
 	return 0;
 }
