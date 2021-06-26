#include<stdio.h>
#include<conio.h>
int main()
{int n,a,i=1;
 printf("Enter two numbers n and a=");
 scanf("%d,%d,&n,&a");
 for(i=1;i<=a;i++)
 {
 	printf("\n%d * %d = %d",n,i,n*i);
 }
    return 0;
}
