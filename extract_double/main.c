#include <stdio.h>
#include <stdlib.h>
#define size 100

int main()
{
    int i=0,n=0;
    int m,k,p,q,r;
    double num[size];
    char str[size];
    printf("please enter a piece of character string.\n");
    gets(str);
    while(1)
    {
        while(str[i]&&(str[i]<'0'||str[i]>'9'))
            ++i;
        if(str[i]&&str[i]>='0'&&str[i]<='9')

            num[n]=str[i]-'0';
            m=i+1;

        if(str[i])
        {
            for(;(str[m]>='0'&&str[m]<='9');)
            {

                num[n]=(num[n]*10)+(str[m]-'0');
                ++m;

                    if(str[m]=='.'&&(str[m+1]>='0'&&str[m+1]<='9'))
                    {
                            q=0;
                            p=m+1;
                        for(;str[p]>='0'&&str[p]<='9';)
                        {
                            num[n]=(num[n]*10)+(str[p]-'0');
                            ++q;
                            ++p;

                        }


                        for(r=0;r<q;++r)
                        {
                            num[n]=num[n]/10;
                            m=p+1;
                        }


                i=m;
                n++;
                    }


            }

            if(str[m]=='.'&&(str[m+1]>='0'&&str[m+1]<='9'))
                    {
                            q=0;
                            p=m+1;
                        for(;str[p]>='0'&&str[p]<='9';)
                        {
                            num[n]=(num[n]*10)+(str[p]-'0');
                            ++q;
                            ++p;

                        }


                        for(r=0;r<q;++r)
                        {
                            num[n]=num[n]/10;
                            m=p+1;
                        }


                i=m;
                n++;
                    }





        }
        else
            break;
    }

    printf("the character string include %d nums\n",n);
         for(k=0;k<n;++k)
         printf("%f  ",num[k]);
        printf("\n");
    return 0;
}





















