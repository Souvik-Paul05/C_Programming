#include<stdio.h>
 int main()
 {
 	int day_num;
 	printf("Enter the Day_No.:");
 	scanf("%d",&day_num);
 	switch(day_num)
 	{
 		case 1:
 			printf("\nThe Day is Sunday.");
 			break;
 		case 2:
 			printf("\nThe Day is Monday.");
 			break;
 		case 3:
 			printf("\nThe Day is Tuesday.");
 			break;
 		case 4:
 			printf("\nThe Day is Wednesday.");
 			break;
 		case 5:
 			printf("\nThe Day is Thursday.");
 			break;
 		case 6:
 			printf("\nThe Day is Friday.");
 			break;
 		case 7:
 			printf("\nThe Day is Satday.");
 			break;
 		default:
		    printf("\nWhat The Fuck!\nEnter the Right Number.");	
	 }
	 return 0;
 }
