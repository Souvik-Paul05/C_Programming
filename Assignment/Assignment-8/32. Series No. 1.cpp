#include<stdio.h>
int main()
{
	int i,n;
	printf("Emter The No. of Terms:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		printf("%d  ",i*i);
	}
	return 0;
}
