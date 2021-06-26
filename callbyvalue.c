#include<stdio.h>
int fun(int a,int b)
{
	a=20;
	b=10;
	
}
int main()
{
	int x=10,y=20;
	fun(x,y);
	printf("%d %d",x,y);
	return 0;
}
