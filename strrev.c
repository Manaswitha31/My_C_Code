#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double n,r1,r2,r,realpart,imgpart;
	printf("Enter values of a,b,c = ");
	scanf("%d%d%d",&a,&b,&c);
	n=(b*b)-(4*a*c);
	if(n>0)
	{
		r1=((-b+sqrt(n))/2*a);
		r2=((-b-sqrt(n))/2*a);
		printf("r1=%lf,r2=%lf",r1,r2);
	}
	else if(n<0)
	{
		realpart=(-b)/2*a;
		imgpart=(sqrt(n))/2*a;
		printf("r1=%.2lf+%.2lfi",realpart,imgpart);
		printf("\nr2=%.2lf-%.2lfi",realpart,imgpart);
	}
	else{
		r=(-b)/2*a;
		printf("r=%.2lf",r);
	}
	
	
	return 0;
	
}
