#include<stdio.h>
int main()
{
	int x,a[100]={4,10,25,33,48,52,63,74,85,96},n=10,low=0,mid=0,high=n-1;
	printf("Enter a search key = ");
	scanf("%d",&x);
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==x)
		{
			printf("Found!");
			break;
		}
		if(a[mid]<x)
		low=mid+1;
		else
		high=mid-1;
	}
	if (low>=mid)
	printf("Not found!");
	
	return 0;
}
