#include<stdio.h>
 int main()
 {
 	int i,n,flag=0;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	for(i=2;i<=n/2;i++)
 	{
 		if(n%i==0)
 		{
 			flag=1;
 			break;
		 }
	 }
	if(flag==0)
	{
		printf("\n%d is a Prime Number.",n);
	}
	else
	{
		printf("\n%d is not a Prime Number.",n);
	}
	return 0;
 }
