#include <stdio.h>

int main()
{
    int a,b,prod=0,i,n;
    printf("No.of dimensions =");
    scanf("%d",&n);
    printf("The values are : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d],b[%d] = ",i,i);
        scanf("%d%d",&a,&b);
        prod+= a*b;
    }
    printf("%d\n",prod);
    printf("%d %d",a,b);

    return 0;
}
