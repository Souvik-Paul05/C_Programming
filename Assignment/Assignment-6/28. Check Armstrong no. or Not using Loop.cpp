#include<stdio.h>
#include<math.h>
 int main()
 {
 	int i,n,r,sum=0,count=0,temp;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	temp=n;
 	while(n != 0)
 	{
 		n=n/10;
 		count++;
	 }
	n=temp;
	while(n != 0)
	{
		r=n%10;
		sum=sum+(pow(r,count));
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\n%d is a Armstrong Number.",temp);
	}
	else
	{
		printf("\n%d is not a Armstrong Number.",temp);
	}
	return 0;
 }
