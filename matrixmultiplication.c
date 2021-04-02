#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,i,j;
	printf("Enter values of r1,c1,r2,c2 =");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	printf("Enter the elements of first matrix =\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter elements of second matrix =\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=
		}
		printf("\n");
	}
	
	
	return 0;
	
}
