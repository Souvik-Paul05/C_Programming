#include<stdio.h>
 int main()
 {
 	int i,n,r,sum=0,fact,temp;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	temp=n;
 	while(n != 0)
 	{
 		r=n%10;
 		fact=1;
 		for(i=1;i<=r;i++)
 		{
 			fact=fact*i;
		 }
		sum=sum+fact;
		n=n/10;
	 }
	if(sum==temp)
	{
		printf("\n%d is a Strong Number.",temp);
	}
	else
	{
		printf("\n%d is not a Strong Number.",temp);
	}
	return 0;
 }
