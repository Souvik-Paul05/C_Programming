#include<stdio.h>
 int main()
 {
 	int marks;
 	printf("PLEASE ENTER YOUR MARKS:");
 	scanf("%d",&marks);
 	if (100>=marks && marks>=90)
 	  printf("YOUR GRADE IS 'O'");
 	   else if (90>marks && marks>=80)
 	    	printf("YOUR GRADE IS 'E'");
 	     else if (80>marks && marks>=70)
 	      	printf("YOUR GRADE IS 'A'");
 	       else if (70>marks && marks>=60)
 	        	printf("YOUR GRADE IS 'B'");
 	         else if (60>marks && marks>=50)
 	          	printf("YOUR GRADE IS 'C'");
 	           else if (50>marks && marks>=40)
 	            	printf("YOUR GRADE IS 'D'");
 	             else
 	              	printf("WORK HARD MAN!\nYOU ARE FAIL\nBETTER LUCK NEXT TIME");
 	                	return 0;
  }
