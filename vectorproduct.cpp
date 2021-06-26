#include<stdio.h>
int main()
{
	int a,b,prod=0;
	FILE *c;
	c=fopen("vec.dat","r");
	while(!feof(c))
	{
		fscanf(c,"%d%d",&a,&b);
		prod+=a*b;
		printf("%d%d\n",a,b);
	}
	printf("Product of vector is %d\n",prod);
	if(prod==0)
	{
		printf("They are Perpendicular");
	}
	
}
