#include<stdio.h>
int main()
{
	int i,a[20],d;
	printf("Enter an element to search in fibonacci series :\n");
	scanf("%d",&d);
	a[0]=0;
	a[1]=1;
	for(i=0;i<20;i++)
	{
		printf("%d ",a[i]);
		a[i+2]=a[i]+a[i+1];
		a[i]=a[i+1];
		a[i+1]=a[i+2];
	}
	
	return 0; 
	
	
}
