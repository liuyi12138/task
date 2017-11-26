#include <stdio.h>
#include <stdlib.h>
typedef struct Stack{
	int data;
	struct Stack * next;
}stack;
typedef struct{
	stack * top;
	int count;
}links;


links *initstack();
links *push(links * ,int);
int pop(links * );
int gettop(links *);
int clean(links *);

void main()
{
	links *head;
	int x,y;
	head = initstack();

	printf("please enter the data in the stack!\n");
	scanf("%d",&x);
	while(x != 0){
		head = push(head,x);
		printf("the number is %d\n",x);
		printf("if you want to stop push in,please enter 0.\n");
		scanf("%d",&x);
	}

	printf("the first data is %d.\n",gettop(head));

	y = pop(head);
	printf("the out number is %d\n",y);

	printf("now the first data is %d.\n",gettop(head));

	printf("now free the stack!\n");
	clean(head);
	free(head);
}

links *initstack(){
	links * p;
	if(	(p = (links * )malloc(sizeof(links))) == NULL)
		printf("0");
	p->top = NULL;
	p->count = 0;
	return p;
}
links *push(links *p,int x){
	stack * temp;
	temp = (stack * )malloc(sizeof(stack));
	temp->data = x;
	temp->next = p->top;
	p->top = temp;
	p->count += 1;
	return p;
}

int pop(links *p){
	stack * q;
	int x;
	if(p->top == NULL)
		printf("The stack is empty!");
	else
	{
		q = p->top;
		x = q->data;
		p->top = q->next;
		p->count--;
		free(q);
	}
	return x;
}

int gettop(links *p){
	int x;
	stack * q;
	if(p->top != NULL)
	{
		q = p->top;
		x = q->data;
		return x;
	}
	else
		return 0;
}

int clean(links * p){
	stack * q;
	while(p->top != NULL)
	{
		q=p->top;
		p->top = q->next;
		p->count--;
		free(q);
	}
	return 1;
}
