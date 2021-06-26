#include<stdio.h>
int main()
{
	int x,y,z;
	FILE *ip;
	ip=fopen("mannu.dat", "a");
	scanf("%d%d%d",&x,&y,&z);
	fprintf(ip,"%d %d %d\n",x,y,z);
	return 0;
	
}
