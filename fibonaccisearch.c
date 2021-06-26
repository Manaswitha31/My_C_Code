#include<stdio.h>
int main()
{
	int b[100],n,c1,c2,c3,i,j,x,offset=-1,m;
	int a[10]={0,1,1,2,3,5,8,13,21,34};
	printf("Enter no.of array elements = ");
	scanf("%d",&n);
	printf("Search element is ");
	scanf("%d",&m);
	printf("Array elements are \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]>=n)
		{
			c3=a[i];
			c2=a[i-1];
			c1=c3-c2;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if((offset+c1)<10)
		{
			x=offset+c1;
		}
		if((offset+c1)>10)
		{
			x=10;
		}
		if(b[x]<m)
		{
			offset=x;
			c3=c2;
			c2=c1;
			c1=c3-c2;
		}
		if(b[x]>m)
		{
			for(j=0;j<2;j++)
			{
				c3=c2;
				c2=c1;
				c1=c3-c2;
			}
		}
		if(b[x]==m)
		{
			printf("Element found");
			break;
		}
		if(i==n-1)
		{
			printf("Element not found");
		}
		
	}
	return 0;
	
}
