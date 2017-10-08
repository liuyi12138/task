#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    printf("please enter the numbers from the min one to the max one.\n");
    int a[10];
    for(n=0;n<10;++n)
    {
        scanf("%d",&a[n]);
    }
    for(i=0;i<5;++i)
    {
        int tem=a[i];
        a[i]=a[9-i];
        a[9-i]=tem;
    }
    for(j=0;j<10;++j)
    {
        printf("%d",a[j]);
        printf(" ");
    }

    return 0;

}
