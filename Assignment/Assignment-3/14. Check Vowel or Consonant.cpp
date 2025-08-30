#include<stdio.h>
 int main()
 {
 	char ch;
 	printf("Enter the Character:");
 	scanf("%c",&ch);
 	if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||ch=='U'||ch=='u')
 	{
 		printf("\n%c is a Vowel.",ch);
	 }
	else
	{
		printf("\n%c is a Consonant",ch);
	}
	return 0;
 }
