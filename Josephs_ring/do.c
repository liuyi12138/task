#include <stdio.h>
#include <stdlib.h>
#include "a_head.h"

void JosephCircle(CirList *L, int m,int n)
{
    CirList last = *L;
    CirList p ;
    CirList now;
    while( last->next->number != 1 )
    {
        last = last->next;
    }
    now=last->next;
    p=now->next;

    int k=1;
    int a=0;
    while(a<n)
    {
        if(k==m)
        {
            printf("%d  ",now->number);
            m=now->data;
            now->next=NULL;
            last->next=p;
            now=p;
            p=p->next;
            ++a;
            k=1;
        }
        else
        {
            last=now;
            now=p;
            p=p->next;
            ++k;
        }

    }
    return ;
}
