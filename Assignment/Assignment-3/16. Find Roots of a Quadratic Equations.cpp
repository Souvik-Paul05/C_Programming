#include<stdio.h>
#include<math.h>
 int main()
 {
    int a,b,c;
    float e,r1,r2;
    printf("Enter The 1st co-efficient:");
    scanf("%d",&a);
    printf("Enter The 1st co-efficient:");
    scanf("%d",&b);
    printf("Enter The 1st co-efficient:");
    scanf("%d",&c);
    e=(pow(b,2)-(4*a*c));
    if (e>0)
    {
    	r1= ((-b)+(sqrt(e)))/2*a;
    	r2= ((-b)-(sqrt(e)))/2*a;
    	printf("The two roots are:\n%.2f\n%.2f",r1,r2);
	}
 	 else if (e==0)
 	 {
 	 	r1= ((-b)/(2*a));
 	 	printf("The root is:\n%.2f",r1);
	  }
	  else
	   printf("\nThe roots are imaginary.");
	 return 0;
 }
