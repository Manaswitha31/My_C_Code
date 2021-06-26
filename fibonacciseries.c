#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c,d;
	printf("Enter range of fibonacci series : \n");
	scanf("%d",&n);
	printf("Enter an element to search in fibonacci series :\n");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		if(a==d)
		{
			printf("Element exits!\n");
			break;
		}
		if(i==n-1)
		{
			printf("Element not exits in fibonacci series");
		}
		
		c=a+b;
		a=b;
		b=c;
	}
	
	return 0; 
	
	
}
