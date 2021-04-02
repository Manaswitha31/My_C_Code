#include<stdio.h>
int main()
{
	int i,j,k,a[4][4],b[4][4],r1,c1;
	printf("enter row n column value\n");
	scanf("%d%d",&r1,&c1);
	printf("enter a matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			b[i][j]=a[j][i];
		}
		
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	 return 0;
} 
