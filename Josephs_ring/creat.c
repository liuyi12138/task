#include <stdio.h>
#include <stdlib.h>
#include "a_head.h"



void createCirList(CirList *L, int n)
{
    struct CirNode *now,*p;
        int i;
    for(i=1;i<=n;++i)
    {
        printf("please enter the %d data\n",i);
        now=(struct CirNode*)malloc(sizeof(struct CirNode));
        scanf("%d",&now->data);
        now->number=i;
        if((*L)==NULL)
            (*L)=now;
        else
            p->next=now;
        now->next=NULL;
        p=now;
    }
    p->next=(*L);
    return ;
}
