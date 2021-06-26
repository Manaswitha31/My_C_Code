#include <stdio.h>

int main()
{
    int a[100],b[100],prod=0,i,n;
    printf("No.of dimensions =");
    scanf("%d",&n);
    printf("The values are : \n");
    for(i=0;i<n;i++)
    {
        printf("a[%d],b[%d] = ",i,i);
        scanf("%d%d",&a[i],&b[i]);
        prod+= a[i] * b[i];
    }
    printf("%d",prod);

    return 0;
}

