#include<stdio.h>
int main()
{
	int x,y,z;
	FILE *a;
	a=fopen("mouni.dat","a");
	printf("%X",a);
	scanf("%d%d%d",&x,&y,&z);
	fprintf(a,"%d %d %d\n",x,y,z);
	return 0;
}
