#include<stdio.h>
#include<math.h>
 int main()
 {
 	int i,n;
	float sum=0;
 	printf("Enter The no. of Terms:");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)
 	{
 		if (i%2==0)
 		sum=sum-(1/(pow(i,2)));
 		else
 		sum=sum+(1/(pow(i,2)));
	 }
	printf("\nAnswer:%f",sum);
	return 0; 
 }
