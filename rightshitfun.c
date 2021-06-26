#include<stdio.h>
int shift(int a)
{
	int count=0;
	while(a)
	{
		count++;
		a>>=2;
	}
	return count;
}
int main()
{
	printf("%d",shift(435));
	return 0;
}
