#include <stdio.h>
#define NUM 5

typedef struct student
{
    int id;
    double grades;
};

void struct_sort(struct student*st,int );


int main()
{
 int m,n;

struct student stu[NUM];


 for(m=0;m<NUM;++m)
 {
    printf("please enter the information of the student %d \n",m+1);
    scanf("%s %d",&stu[m].id,&stu[m].grades);
 }
 struct_sort (stu,NUM);

   for(n=0;n<NUM;++n)
     {

         printf("%s,%d\n",&stu[NUM-n-1].id,stu[NUM-n-1].grades);
     }
     return 0;

}


 void struct_sort(struct student*st,int p)
 {
     int i,j;
     struct student k;
     struct student stu[NUM];
       for(i=(NUM-1);i>0;--i)
    {
        for(j=0;j<i;++j)
        {
         if(stu[j+1].grades>stu[j].grades)
          {
            k=stu[j];
            stu[j]=stu[j+1];
            stu[j+1]=k;
          }
        }

    }

 }
