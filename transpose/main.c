#include <stdio.h>
#include <stdlib.h>
#define row 4
#define col 4
int main()
{
   int a[row][col];
   int i,j;
   printf("please enter an arrays which includes 4 rows and 4cols (16nums)\n");
   for(i=0;i<row;++i)
   {
        for(j=0;j<col;++j)
            scanf("%d",&a[i][j]);
   }
   int k,q,tem;
   for(k=0;k<row;++k)
   {
       for(q=0;q<col;++q)
       {
           tem=a[q][k];
           a[q][k]=a[k][q];
           a[k][q]=tem;

       }
   }
   int m,n;
   for(m=0;m<row;++m)
   {
       for(n=0;n<col;++n)
        {
            printf("%d",a[n][m]);
            printf(" ");
        }
        printf("\n");
   }
   return 0;
}
