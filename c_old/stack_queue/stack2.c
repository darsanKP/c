#include<stdio.h>
#include<stdbool.h>
#define MAX 5
#include<stdlib.h>
typedef struct
{
	int arr[MAX];
	int top;
}stack;


bool isFull(stack *s)
{
	return s->top==MAX-1;
}

bool isEmpty(stack *s)
{
	return s->top==-1;
}

void initialise(stack *s)
{
	s->top=-1;
}

void push(stack *s,int value)
{
	if(isFull(s))
	{
		printf("FULL!\n");
		return;
	}
	else
	{
		s->arr[++s->top]=value;
	}
}

void pop(stack *s)
{
	if(isEmpty(s))
	{
		printf("EMPTY!\n");
	return;
	}
	else
	{
		s->top--;
	}
}

void peek(stack *s)
{
	printf("\n value at top is %d",s->arr[s->top]);
}

void print(stack *s)
{
	for(int i=0;i<s->top+1;i++)
		printf("%d ",s->arr[i]);
}
int main()
{
stack s;
initialise(&s);
push(&s,1);
push(&s,2);
push(&s,3);
push(&s,4);
push(&s,5);
print(&s);
push(&s,6);
print(&s);
pop(&s);

print(&s);
push(&s,6);

push(&s,7);

push(&s,8);

print(&s);
peek(&s);
}





