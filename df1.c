#include<stdio.h>
int main()
{
	int x,a[6],i;
	FILE *b;
	b=fopen("pqr.dat","r");
	for(i=0;i<6;i++)
	{
		fread(&x,sizeof(int),1,b);
		printf("%d\n",x);
	}
	return 0;
}
