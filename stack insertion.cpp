#include<stdio.h>
int main()
{
	int top=0,n,MAX,temp;
	printf("enter element to be inserted");
	scanf("%d",n);
	if(top=MAX-1)
	printf("stack overflow ");
	else
	{
		temp=top;
		top=top-1;
		top=temp;
		printf("the element is inserted at the top");
	}
	return 0;
}
