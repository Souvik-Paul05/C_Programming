#include<stdio.h>
 int main()
 {
 	int i,n,r,sum=0,temp;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	temp=n;
 	while(n != 0)
 	{
 		r=n%10;
 		sum=sum*10+r;
 		n=n/10;
	 }
	printf("\nThe Reverse Number is %d",sum);
	if(temp==sum)
	{
		printf("\n%d is a Palindrome Number.",temp);
	}
	else
	{
		printf("\n%d is Not a Palindrome Number.",temp);
	}
	return 0;
 }
