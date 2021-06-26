#include<stdio.h>
float term(int n,float x)
{
	if(n==0)
	return 1;
	else
	return term(n-1,x)*x/n;
}
int main()
{
	printf("The term is %f",term(3,2));
	return 0;
}
