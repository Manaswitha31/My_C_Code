#include<stdio.h>
int main()
{
	int n,i,j,m,np=0,passed=0;
	FILE *a;
	a=fopen("manasa.dat","r");
	fscanf(a,"%d",&n);
	printf("No.of students : %d\n ",n);
	for(i=0;i<n;i++)
	{
		passed=0;
		for(j=0;j<5;j++)
		{
			fscanf(a,"%d",&m);
			if(m>=35)
			{
				passed++;
			}
		}
		if(passed==5)
		{
			np++;
		}
	}
	printf("No.of students passed = %d ",np);
	return 0;
}
