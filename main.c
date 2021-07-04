#include <stdio.h>
int a=3;
int b=4;
extern int b;
int main()
{
	extern int a;
	printf("%d\n",a);
	printf("%d",b);
	return 0;
}
