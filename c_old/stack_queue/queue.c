#include<stdio.h>
#include<stdbool.h>
#define MAX 5
typedef struct
{
	int arr[MAX];
	int front;
	int rear;
}queue;

void initialize(queue *q)
{
	q->front	=-1;
	q->rear		=-1;
}

bool isEmpty(queue *q)
{
	return q->front==-1;
}

bool isFull(queue *q)
{
	return q->rear==MAX-1;
}

void enqueue(queue *q,int value)
{
	if(isFull(q))
		printf("FULL\n");
	else
	{
		if(q->front==-1)
			q->front=0;
		q->arr[++q->rear]=value;
	}
}

void dequeue(queue *q)
{
	if(isEmpty(q))
		printf("Empty");
	else
	{
		for(int i=0;i<q->rear;i++)
			q->arr[i]=q->arr[i+1];
		q->rear--;
		if(q->rear==-1)
			q->front=-1;
	}
}

void print(queue *q)
{

		for(int i=0;i<q->rear+1;i++)
		printf(" %d elm is %d \n",i,q->arr[i]);
}


int main() {
    queue q;
    initialize(&q);  // Initialize the queue

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    print(&q);  // Print queue after enqueuing

    dequeue(&q);
    print(&q);  // Print queue after dequeuing

    enqueue(&q, 60);  // Enqueue another element after dequeue
    print(&q);

    return 0;
}

