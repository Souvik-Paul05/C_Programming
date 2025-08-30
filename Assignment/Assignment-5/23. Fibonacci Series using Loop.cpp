#include<stdio.h>
 int main()
 {
 	int i,n,first=0,second=1,next;
 	printf("Enter the Range:");
 	scanf("%d",&n);
 	printf("The Fibonacci Series:\n%d\n%d",first,second);
 	for(i=3;i<=n;i++)
 	{
 		next=first+second;
 		first=second;
 		second=next;
 		printf("\n%d",next);
	 }
	 return 0;
 }
