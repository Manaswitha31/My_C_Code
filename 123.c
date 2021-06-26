#include<stdio.h>
int main(int n, char **a)
{
	int i;
	printf("Number of arguments are :%d\n",n);
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
