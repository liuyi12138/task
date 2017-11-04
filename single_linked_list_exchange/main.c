#include <stdio.h>
#include <stdlib.h>

 struct node
{
    int date;
    struct node * next;
};

int main(void)
{
    struct node *head=NULL;
    struct node *last,*now;
    int i;
    int k=1,m=1,n=1;


    puts("please enter the first date.");
    while (scanf("%d",&i))
    {
        now=(struct node*)malloc(sizeof(struct node));

        if(head==NULL)
            head=now;
        else
            last->next=now;
        now->next=NULL;
       now->date=i;
        while (getchar()!='\n')
            continue;
        puts("please enter the next date.(enter 'q' to quit.)");
        last=now;
        ++k;

    }

    if(head==NULL)
        puts("No date entered.\n");
    else
        printf("Here are the dates.\n");
    now=head;
    while(m<k)
    {
        printf("the date %d is %d.\n",m,now->date);

        now=now->next;
        ++m;
    }

    printf("Now , we will exchange the single linked list!\n");

    int p=1;
    last=head->next;
    now=last->next;
    last->next=head;
    head=last;
    last=now;

    while(last!=NULL)
    {
        now=last->next;
        last->next=head;
        head=last;
        last=now;

    }



    now=head;

    int j=1;
        while(j<k)
    {
        printf("the date %d is %d.\n",j,now->date);

        now=now->next;
        ++j;
    }


    while(n<k)
    {
        now=head;
        head=now->next;
        free(now);
        ++n;
    }
    printf("End!\n");
    return 0;

}

