#include<stdio.h>
void binary(int n)
{
	if (n/2)
	binary(n/2);
	printf("%d",n%2);
	
}
int main()
{
	binary(197);
	return 0;
}
