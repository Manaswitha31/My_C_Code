#include<stdio.h>
//void caller();
static int x=10;
static
int fun()
{
	static int y=0;
	printf("%d\n",y);
	y=y+1;
}
int main()
{
	fun();
	fun();
	fun();
	fun();
	return 0;
}
