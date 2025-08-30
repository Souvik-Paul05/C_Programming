#include<stdio.h>
 int main()
 { 
   int year,month,days,r_days;
   printf("Enter the no. of days: ");
   scanf("%d",&days);
   year=days/365;
   r_days=days%365;
   month=r_days/30;
   days=r_days%30;
   printf("\nYears=%d\nMonths=%d\nDays=%d",year,month,days);
   return 0;
 }
