#include<stdio.h>
int main()
{
	int n,k;
	printf("Enter a number = ");
	scanf("%d",&n);
	printf("Enter number of times to shift =");
	scanf("%d",&k);
	n ^= 1<<k;
	printf("%d",n);
}
