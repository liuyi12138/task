#include <stdio.h>
#include <stdlib.h>
#define N 8//定义N*N的棋盘即(N-1)皇后问题
void do_it(int m,int n,int w);
int a[N][N];
int num=0;

int main()
{
    int i,j;
    for(i=0;i<N;++i)
        for(j=0;j<N;++j)
        {
            a[i][j]=0;
        }

    for(i=0;i<N;++i)
        for(j=0;j<N;++j)
            do_it(i,j,0);
    printf("%d",num/(N-1));
    return 0;
}

void do_it(int m,int n,int w)

{
    int i,j,p,q,h,k,d;
    a[m][n]+=N*100;
    ++w;





    for(q=0;q<N;++q)
        a[q][n]+=1;
    for(p=0;p<N;++p)
        a[m][p]+=1;
    for(d=1;(m+d<N)&(n+d<N);++d)
        a[m+d][n+d]+=1;
    for(d=1;(m+d<N)&(n-d>=0);++d)
        a[m+d][n-d]+=1;
    for(d=1;(m-d>=0)&(n+d<N);++d)
        a[m-d][n+d]+=1;
    for(d=1;(m-d>=0)&(n-d>=0);++d)
        a[m-d][n-d]+=1;

    if(w==N-1)  //判断是否完成任务
    {
        int i,j;
        for(i=0;i<N;++i)
            for(j=0;j<N;++j)
                if(a[i][j]>=N*100)
                {
                    num+=1;
                    printf("(%d,%d)",i+1,j+1); //输出落子

                }

        printf("\n");
        int q1,p1,d1;
        a[m][n]-=N*100;
        --w;
        for(q1=0;q1<N;++q1)
            a[q1][n]-=1;
        for(p1=0;p1<N;++p1)
            a[m][p1]-=1;
        for(d1=1;(m+d1<N)&(n+d1<N);++d1)
            a[m+d1][n+d1]-=1;
        for(d1=1;(m+d1<N)&(n-d1>=0);++d1)
            a[m+d1][n-d1]-=1;
        for(d1=1;(m-d1>=0)&(n+d1<N);++d1)
            a[m-d1][n+d1]-=1;
        for(d1=1;(m-d1>=0)&(n-d1>=0);++d1)
            a[m-d1][n-d1]-=1;
        return;

    }
    for(h=0;h<N;++h)
        for(k=0;k<N;++k)
            if(a[h][k]==0)
            {
                do_it(h,k,w);
            }


        int q1,p1,d1;
        a[m][n]-=N*100;
        --w;
        for(q1=0;q1<N;++q1)
            a[q1][n]-=1;
        for(p1=0;p1<N;++p1)
            a[m][p1]-=1;
        for(d1=1;(m+d1<N)&(n+d1<N);++d1)
            a[m+d1][n+d1]-=1;
        for(d1=1;(m+d1<N)&(n-d1>=0);++d1)
            a[m+d1][n-d1]-=1;
        for(d1=1;(m-d1>=0)&(n+d1<N);++d1)
            a[m-d1][n+d1]-=1;
        for(d1=1;(m-d1>=0)&(n-d1>=0);++d1)
            a[m-d1][n-d1]-=1;
        return;
}
