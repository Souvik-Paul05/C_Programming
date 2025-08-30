#include<stdio.h>
#include<math.h>
 int main()
 {
 	int i,n,value;
 	printf("Enter The no. of Terms:");
 	scanf("%d",&n);
 	for (i=1;i<=n;i++)
 	{
 		value=(pow(i,3))-1;
 		printf("%d  ",value); 	 
	 } 
	return 0;
 }
