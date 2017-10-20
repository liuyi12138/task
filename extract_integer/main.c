#include <stdio.h>
#include <stdlib.h>
#define size 100

int main()
{
    int i=0,n=0;
    int m,k;
    int num[size];
    char str[size];
    printf("please enter a piece of character string.\n");
    gets(str);
    while(1)
    {
        while(str[i]&&(str[i]<'0'||str[i]>'9'))
            ++i;
        if(str[i]&&str[i]>='0'&&str[i]<='9')
            {
            num[n]=str[i]-'0';
            m=i+1;
            for(;str[m]>='0'&&str[m]<='9';)
            {
                num[n]=(num[n]*10)+(str[m]-'0');
                ++m;
            }

            i=m;
            n++;
            }
        else
            break;
    }

    printf("the character string include %d nums\n",n);
    for(k=0;k<n;++k)
        printf("%d  ",num[k]);
        printf("\n");
    return 0;
}
