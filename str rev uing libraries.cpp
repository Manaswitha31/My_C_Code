#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,n;
	printf("enter a string");
	scanf("%s",&a);
	n=strlen(a);
	printf("Reverse of a string is ");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",a[i]);
		
	}
	
	
	return 0;
	
	
		
}
