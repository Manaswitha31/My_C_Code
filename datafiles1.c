#include<stdio.h>
int main()
{
	int x,y,z;
	FILE *ip;
	ip=fopen("mannu.dat", "r");
	printf("%X\n",ip);
	fscanf(ip,"%d%d%d",&x,&y,&z);
	printf("%d %d %d",x,y,z);
	return 0;
	
}
