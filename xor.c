#include<stdio.h>
int main()
{
	int a=4,b=3;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After XOR,a is %d and b is %d",a,b);
	return 0;
}
