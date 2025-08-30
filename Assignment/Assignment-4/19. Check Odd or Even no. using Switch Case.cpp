#include<stdio.h>
 int main()
 {
 	int num;
 	printf("Enter the Number:");
 	scanf("%d",&num);
 	switch(num%2)
 	{
 		case 1:
 			printf("\n%d is a ODD Number.",num);
 			break;
 		default:
 			printf("\n%d is a EVEN Number.",num);
	 }
	 return 0;
 }
