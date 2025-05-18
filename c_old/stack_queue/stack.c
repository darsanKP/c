#include<stdio.h>
#include<stdbool.h>
#define MAX 5

typedef struct
{
	int arr[MAX];
	int top;
}stack;

bool isEmpty(stack *s)
{
	return s->top==-1;
}

bool isFull(stack *s)
{
	return s->top==MAX-1;
}

void push(stack *s,int value)
{
	if(isFull(s))
	{
		printf("Stack full\n");
	}
	else
	{
	s->arr[++s->top]=value;
	}
}

void pop(stack *s)
{
	if(isEmpty(s))
		printf("stack empty\n");
	else
		s->top--;
}
void print(stack *s)
{
	for(int i=0;i<=s->top;i++)
		printf("element %d is %d\n",i,s->arr[i]);
}
void main()
{
	stack s;
	s.top=-1;
	push(&s,1);
	push(&s,2);
	push(&s,3);
	push(&s,4);
	push(&s,5);
	print(&s);
	pop(&s);
	print(&s);

}
