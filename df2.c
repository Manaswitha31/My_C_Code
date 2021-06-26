#include<stdio.h>
int main()
{
	int x,a[6],i;
	FILE *b;
	b=fopen("pqr.dat","r");
	fseek(b,0,SEEK_SET);
	fread(a,sizeof(int),6,b);
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
