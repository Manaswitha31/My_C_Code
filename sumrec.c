#include<stdio.h>
int sum(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
    return (a+sum(a,b-1));
}
int main()
{
	printf("%d",sum(9,3));
}
