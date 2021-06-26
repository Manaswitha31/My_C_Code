#include<stdio.h>
int main(int N ,char *x[])
{
	int n,i,j,m,np=0,passed=0;
	FILE *a,*b;
	a=fopen(x[1],"r");
	b=fopen(x[2],"w");
	fscanf(a,"%d",&n);
	fprintf(b,"No.of students : %d\n ",n);
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
	fprintf(b,"No.of students passed = %d ",np);
	return 0;
}
