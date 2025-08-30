#include<stdio.h>
 int main()
 {
 	int num;
 	printf("Enter the Number:");
 	scanf("%d",&num);
 	if(num%2==0)
 	{
 		printf("\n%d is a EVEN Number.",num);
	 }
	else
	{
		printf("\n%d is a ODD Number.",num);
	}
	return 0;
 }
