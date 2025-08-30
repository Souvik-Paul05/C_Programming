#include<stdio.h>
#include<string.h>
 struct book
 {
 	char title[100];
 	int year;
 	float price;
 	char author[100];
 } b;
 
 int main()
 {
 	printf("Enter the Book Name: ");
 	fgets(b.title, sizeof(b.title), stdin);
 	printf("Enter the Author Name: ");
 	fgets(b.author, sizeof(b.author), stdin);
 	printf("Enter the Pubishing Year: ");
 	scanf("%d",&b.year);
 	printf("Enter the Price: ");
 	scanf("%f",&b.price);
 	
 	printf("\nBook Details:\n");
 	printf("Title: %s",b.title);
 	printf("Author: %s",b.author);
 	printf("Publishing Year: %d",b.year);
 	printf("\nPrice: %.2f",b.price);
 	
 	return 0;
 }
