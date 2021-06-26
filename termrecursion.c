#include<stdio.h>
float term(int n,float x)
{
	if(n==0)
	return x;
	else
	return term(n-1,x)*-1*x*x/((2*n)*(2*n+1));
}
int main()
{
	printf("The term is %f",term(4,2));
	return 0;
}
