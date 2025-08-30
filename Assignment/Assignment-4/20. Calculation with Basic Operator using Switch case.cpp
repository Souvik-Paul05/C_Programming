#include<stdio.h>
 int main()
 {
 	char op;
 	float num1,num2,result;
 	printf("Enter the Operator:");
 	scanf("%c",&op);
 	printf("\nEnter the two Number:");
 	scanf("%f%f",&num1,&num2);
 	switch(op)
 	{
 		case '+':
 			result=num1+num2;
 			printf("%.2f + %.2f = %.2f",num1,num2,result);
 			break;
 		case '-':
 			result=num1-num2;
 			printf("%.2f - %.2f = %.2f",num1,num2,result);
 			break;
 		case '*':
 			result=num1*num2;
 			printf("%.2f * %.2f = %.2f",num1,num2,result);
 			break;
 		case '/':
 			if(num2==0)
 			{
 				printf("The Division will be imaginary.");
			 }
			else
			{
			    result=num1/num2;
 				printf("%.2f + %.2f = %.2f",num1,num2,result);
			}
 			break;
		default:
			printf("Enter The correct Operator.");	
	 }
	 return 0;
 }
