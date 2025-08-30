#include<stdio.h>
 int main()
 {
 	int marks;
 	printf("Enter the Obtained Marks:");
 	scanf("%d",&marks);
 	if(marks>100)
 	{
 		printf("\nEnter the marks between 0 to 100.");
	 }
	else
	{
		switch(marks/10)
 	{
 		case 10:
 			printf("\nYour Grade is 'O'");
 			break;
 		case 9:
 			printf("\nYour Grade is 'O'");
 			break;
 		case 8:
 			printf("\nYour Grade is 'E'");
 			break;
 		case 7:
 			printf("\nYour Grade is 'A'");
 			break;
 		case 6:
 			printf("\nYour Grade is 'B'");
 			break;
 		case 5:
 			printf("\nYour Grade is 'C'");
 			break;
 		case 4:
 			printf("\nYour Grade is 'D'");
 			break;
 		default:
 			printf("\nWork Hard!\nYou are fail.");	
	 }
	}
 	return 0;
 }
