#include <stdio.h>
#include <stdlib.h>
#define row 4
#define col 4
int main()
{
  int a[row][col];
  int i,j;
  printf("please enter an arrays which includes 4rows and 4 cols (16nums)\n");
  for(i=0;i<row;++i)
  {
      for(j=0;j<col;++j)
            scanf("%d",&a[j][i]);
  }
int k,q,m,n,max;
  for(k=0;k<row;++k)
  {
      for(q=0;q<col;++q)
      {
          n=q+1;
          for(m=k;m<row;)
          {
              for(;n<col;++n)
              {
                  if(a[q][k]<=a[n][m])
                  {

                      max=a[n][m];
                      a[n][m]=a[q][k];
                      a[q][k]=max;
                  }
                }
                ++m;
                n=0;
           }
        }
}
  int x,y;
  for(x=0;x<row;++x)
  {
      for(y=0;y<col;++y)
      {
          printf("%3d",a[y][x]);
      }
      printf("\n");
  }




    return 0;
}
