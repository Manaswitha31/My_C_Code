#include<stdio.h>
int main()
{
	int n,i=0,a[100],j;
	printf("Enter a number = ");
	scanf("%d",&n);
	while(n)
	{
		a[i]=n%2;
		n=n/2;
		i=i+1;
		
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	
	
	return 0;
}
