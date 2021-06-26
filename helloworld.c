#include<stdio.h>
#include<stdlib.h>
int main(int N, char *x[])
{
	int i,s=0;
	printf("Command line arguments are = %d\n",N);
	for(i=1;i<N;i++)
	{
		s+=atoi(x[i]);
	}
	printf("%d\n",s/(N-1));
	return 0;
}
