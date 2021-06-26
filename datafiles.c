#include<stdio.h>
int main()
{
	int x,y,z;
	FILE *ip;
	ip=fopen("mannu.dat", "w");
	printf("%X",ip);
	scanf("%d%d%d",&x,&y,&z);
	fprintf(ip,"%d %d %d",x,y,z);
	return 0;
	
}
