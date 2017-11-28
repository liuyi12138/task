#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void creat();
int doit (int o);
void check();
void copy();
void judge();
int x,y;
int a [4][4]={0};
int b [4][4]={0};

int main()
{
    int i,m,n;
    int o;

    srand((unsigned int)time(0));
    for(i=0;i<2;++i)
    {
        creat();
        a[x][y]=2;
    }
    for(m=0;m<4;++m)
    {
        for(n=0;n<4;++n)
        {
            if(a[m][n]==0)
                printf("       0");
            else
                printf("%8d",a[m][n]);

        }
        printf("\n");
        printf("\n");
    }
    printf("please enter '5' or '1' or '2' or '3'\n");


    while(scanf("%d",&o))
        {
            check();
            copy();
            doit(o);
            judge();
        }

    return 0;


}

void creat()
{
    int b;
    int m=1;

    while(m)
    {
        b=(rand()%16);
        x=(b%4);
        y=b-4*x;
        if(a[x][y]==0)
            m=0;
    }

}




int doit (int o)
{
    int m,n,f,g,l;
            if(o==1)
            {
                for(m=0;m<4;++m)
                {
                    for(n=0,l=0;n<4;++n)
                    {
                        if(a[m][n]!=0)
                        {
                            a[m][l]=a[m][n];
                            if(n!=l)
                              a[m][n]=0;
                            ++l;

                        }
                    }
                    for(f=1;f<4;++f)
                    {
                        if(a[m][f]==a[m][f-1])
                        {
                            a[m][f-1]*=2;
                            a[m][f]=0;
                            for(g=f+1;g<4;++g)
                            {
                                a[m][g-1]=a[m][g];
                                a[m][g]=0;
                            }

                        }
                    }

                }
            }





            if(o==3)
            {
                for(m=0;m<4;++m)
                {
                    for(n=3,l=3;n>=0;--n)
                    {
                        if(a[m][n]!=0)
                        {
                            a[m][l]=a[m][n];
                            if(n!=l)
                              a[m][n]=0;
                            --l;

                        }
                    }
                    for(f=2;f>=0;--f)
                    {
                        if(a[m][f]==a[m][f+1])
                        {
                            a[m][f+1]*=2;
                            a[m][f]=0;
                            for(g=f-1;g>0;--g)
                            {
                                a[m][g+1]=a[m][g];
                                a[m][g]=0;
                            }

                        }
                    }

                }
            }




            if(o==5)
            {
                for(m=0;m<4;++m)
                {
                    for(n=0,l=0;n<4;++n)
                    {
                        if(a[n][m]!=0)
                        {
                            a[l][m]=a[n][m];
                            if(n!=l)
                              a[n][m]=0;
                            ++l;

                        }
                    }
                    for(f=1;f<4;++f)
                    {
                        if(a[f][m]==a[f-1][m])
                        {
                            a[f-1][m]*=2;
                            a[f][m]=0;
                            for(g=f+1;g<4;++g)
                            {
                                a[g-1][m]=a[g][m];
                                a[g][m]=0;
                            }

                        }
                    }

                }
            }



            if(o==2)
            {
                for(m=0;m<4;++m)
                {
                    for(n=3,l=3;n>=0;--n)
                    {
                        if(a[n][m]!=0)
                        {
                            a[l][m]=a[n][m];
                            if(n!=l)
                              a[n][m]=0;
                            --l;

                        }
                    }
                    for(f=2;f>=0;--f)
                    {
                        if(a[f][m]==a[f+1][m])
                        {
                            a[f+1][m]*=2;
                            a[f][m]=0;
                            for(g=f-1;g>0;--g)
                            {
                                a[g+1][m]=a[g][m];
                                a[g][m]=0;
                            }

                        }
                    }

                }
            }


}


void check()
{
    int m,n;
    int k=0;
    for(m=0;m<4;++m)
    {
        for(n=0;n<4;++n)
        {
            if(a[m][n]==0)
                k=1;
            break;
        }
    }
    if(k==0)
        printf("game over!\n");


}

void judge()
{
    int k=0;
    int i,j,m,n;
    for(i=0;i<4;++i)
    {
        for(j=0;j<4;++j)
        {
            if(a[i][j]!=b[i][j])
            {
                k=1;
                break;
            }
        }
        if(k==1)
            break;
    }
    if(k==1)
    {
        creat();
        a[x][y]=2;
    }
        for(m=0;m<4;++m)
        {
            for(n=0;n<4;++n)
            {
                if(a[m][n]==0)
                    printf("       0");
                else
                    printf("%8d",a[m][n]);

            }
            printf("\n");
            printf("\n");
        }
        printf("please enter '5' or '1' or '2' or '3'\n");


}

void copy()
{
    int i,j;
    for(i=0;i<4;++i)
        for(j=0;j<4;++j)
            b[i][j]=a[i][j];

}

