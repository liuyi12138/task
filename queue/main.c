#include <stdio.h>
#include <stdlib.h>
typedef struct Line{
	int data;
	struct Line * next;
}line;
typedef struct{
	line * front;
	line * rear;
}link;


link *initline();
link *enline(link * ,int);
int deline(link * );
int clean(link *);

void main()
{
	link *queue;
	int x,y;
	queue = initline();

	printf("please enter  some data in the line!\n");
	scanf("%d",&x);
	while(x != 0){
		queue = enline(queue,x);
		printf("the number is %d\n",x);
		printf("if you want to stop enter 0 to quit).\n");
		scanf("%d",&x);
	}

	y = deline(queue);
	printf("the number is %d\n",y);

	clean(queue);
	free(queue);
}

link *initline(){
	link * q;
	q = (link *)malloc(sizeof(link));
	q->front = q->rear = (line * )malloc(sizeof(line));
	q->front->next= NULL;
	return q;
}
link *enline(link *q,int x){
	line * temp;
	temp = ( line*)malloc(sizeof(line));
	temp->data = x;
	temp->next = NULL;
	q->rear->next = temp;
	q->rear = temp;
	return q;
}

int deline(link *q){
	line *p;
	int x;
	if(q->front == q->rear)
	{
		printf("The line is empty!");
		return;
	}

	else
	{
		if(q->front->next = q->rear)
			q->rear = q->front;
		p = q->front->next;
		x = p->data;
		q->front->next = p->next;
		free(p);
		return x;
	}

}


int clean(link * q){
	line * p;
	while(q->front->next != NULL)
	{
		p=q->front;
		q->front = p->next;
		free(q);
	}
	return 1;
}
