#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    printf ("please enter ten numbers.\n");
    int a[10];
    for(n=0;n<10;++n)
    scanf("%d",&a[n]);
    for(i=9;i>0;i--)
    {
        for(j=0;j<i;++j)
        {
            if(a[j]>a[j+1])
            {
                int tem =a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    for(k=0;k<10;++k)
    {
        printf("%d",a[k]);
        printf(" ");
    }
    return 0;
}
