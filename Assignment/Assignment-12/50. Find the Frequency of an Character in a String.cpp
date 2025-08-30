#include<stdio.h>
#include<string.h>
 int main()
 {
 	char str[100],ch;
 	int count=0;
 	printf("Enter a String: ");
 	fgets(str, sizeof(str), stdin);
 	printf("Enter the Chatacter Whom to Find The Frequency: ");
 	scanf("%c",&ch);
 	
 	for(int i=0;str[i] != '\0';i++)
 	{
 		if(ch==str[i])
 		count++;
	 }
 	printf("Frequency of %c: %d",ch,count);
 	return 0;
 }
