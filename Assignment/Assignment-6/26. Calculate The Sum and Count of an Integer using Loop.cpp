#include<stdio.h>
 int main()
 {
 	int i,n,r,count=0,sum=0;
 	printf("Enter the Number:");
 	scanf("%d",&n);
 	while(n != 0)
 	{
 		r=n%10;
 		sum=sum+r;      // for count we can also use n=n/10 operation.
 		count++;
 		n=n/10;
	 }
	printf("\nNumber of Digits: %d",count);
	printf("\nSum of the Digits: %d",sum);
	return 0;
 }
