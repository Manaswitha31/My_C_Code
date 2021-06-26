#include<stdio.h>
int main()
{
	int x[]={1500,204546,25425,301224,351224,40128575},i;
	FILE *a,*b;
	a=fopen("abc.dat","w");
	b=fopen("pqr.dat","w");
	for(i=0;i<6;i++)
	{
		fprintf(a,"%d\n",x[i]);
	}
	fwrite(x,sizeof(int),6,b);
	return 0;
}
