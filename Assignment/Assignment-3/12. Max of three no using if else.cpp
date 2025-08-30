#include<stdio.h>
 int main()
 {
 	int a,b,c;
 	printf("Enter the 1st No.:");
 	scanf("%d",&a);
 	printf("Enter the 2nd No.:");
 	scanf("%d",&b);
 	printf("Enter the 3rd No.:");
 	scanf("%d",&c);
 	if(a>b)
 	{
 		if(a>c)
 		{
 			printf("\nMaximum Number is %d",a);
		 }
		else
		{
			printf("\nMaximum Number is %d",c);
		}
	 }
	else
	{
		if(b>c)
		{
			printf("\nMaximum Number is %d",b);
		}
		else
		{
			printf("\nMaximum Number is %d",c);
		}
	}
	return 0;
 }
