#include<stdio.h>
#include<string.h>
 int main()
 {
 	char str[100],revstr[100];
 	int i,j,length;
 	printf("Enter the String: ");
 	fgets(str, sizeof(str), stdin);
 	
 	for(i=0;str[i] != '\0';i++)
 	{
 		length=i;
	 }
	
	for(i=length-1;i>=0;i--)
	{
		revstr[j]=str[i];
		j++;
	}
	revstr[j]='\0';
	printf("\nOriginl String: %s",str);
	printf("Reversed String: %s",revstr);
	return 0;
 }
