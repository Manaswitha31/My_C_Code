#include<stdio.h>
int main()
{
	int x,y,z;
	FILE *a;
	a=fopen("mouni.dat","r");
	printf("%X\n",a);
	fscanf(a,"%d%d%d",&x,&y,&z);
	printf("%d %d %d",x,y,z);
	return 0;
}
