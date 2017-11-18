#include <stdio.h>
#include <stdlib.h>
#include "a_head.h"


int main()
{
    int n,m;
    printf("please enter the number of the people.\n");
    scanf("%d",&n);
    printf("please enter the number of 'm'.\n");
    scanf("%d",&m);
    CirList *head=NULL;

    createCirList(&head,n);
    JosephCircle(&head,m,n);
     return 0;
}
