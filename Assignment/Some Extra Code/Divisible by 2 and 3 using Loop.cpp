#include<stdio.h>
 int main()
 {
 	int i,sum=0;
 	for (i=100;i<=200;i++)
	 {
	 	if (i%2==0 && i%3==0)
	 	{
		printf("%d\n",i);
	     sum=sum+i;
       }
     }
	 printf("\nThe Sum of Divisible by 2 & 3 between 100 and 200: %d",sum);
	 return 0;
 }
