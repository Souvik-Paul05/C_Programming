#include<stdio.h>
#include<string.h>
 struct student
 {
 	long long int roll;
 	char name[25];
 	int marks[3];
 };
 
 int main()
 {
 	int i;
 	struct student s;
 	printf("Enter Student Name: ");
 	fgets(s.name, sizeof(s.name), stdin);
 	printf("Enter Student Roll: ");
 	scanf("%lld",&s.roll);
 	printf("Enter the Marks: \n");
 	for(i=0;i<3;i++)
 	{
 		printf("Marks %d: ",i+1);
 		scanf("%d",&s.marks[i]);
	 }
	printf("\n Student Details:\n");
	printf("\nName: %s",s.name);
	printf("Roll: %lld",s.roll);
	printf("\nMarks:\n");
	for(i=0;i<3;i++)
 	{
 		printf("%d ",s.marks[i]);
	 }
	return 0;
 }
