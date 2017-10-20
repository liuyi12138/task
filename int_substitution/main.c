#include <stdio.h>
#include <stdlib.h>
#define size 20

int main()
{
   unsigned long long int a,b,c,d,i,q,p,m,n,e;
    int num[size];
    printf("please enter a number.\n");
    scanf("%lld",&a);
    b=a;
    int k=0;
    while(b>0)
    {
        k++;
        b/=10;
    }

    for(q=k;q>0;--q)
    {
        for(p=1,d=1;p<q;++p)
           {
               d*=10;
           }
        num[p]=a/d;
        a-=(num[q]*d);
    }

  unsigned long long int new=0;
    for(m=k;m>0;--m)
    {
        for(n=1,e=1;n<m;++n)
        {
            e*=10;
        }

    new+=(num[k+1-n]*e);

    }
printf("%lld",new);

    return 0;


}
