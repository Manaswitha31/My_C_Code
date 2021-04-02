#include<stdio.h>
int main()
{
	int a[10],b[10],c[10],i,n,j=0,k=0;
	printf("Enter no.of elements= ");
	scanf("%d",&n);
	printf("Enter the elements =\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[j]=a[i];
			printf("b[%d]=%d ;",j,b[j]);
			j++;
		}
		else
		{
			c[k]=a[i];
			printf("c[%d]=%d\n",k,c[k]);
			k++;
		}
	}
	return 0;
}
