#include<stdio.h>
#define greater(a,b) if(a>b)\
                       printf("%d is greater than %d",a,b);\
                     else\
					   printf("%d is lesser than %d",a,b);  
int main()
{
	greater(6,8);
}
