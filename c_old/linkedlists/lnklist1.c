#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int var;
struct node *next;
}mynode;


mynode *head,*tail,*temp;


void add(int val)
{
	temp=(mynode*)malloc(sizeof(mynode));
	temp->var=val;
	temp->next=(mynode*)0;

	if(head==(mynode*)0)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
	
}

void print()
{
	for(temp=head;temp!=(mynode*)0;temp=temp->next)
	{
		printf("%d ",temp->var);
	}
	printf("\n");
}

void rev(mynode* curr)
{
if(curr==(mynode*)0)
	return;
if(curr->next!=(mynode*)0)
{
	rev(curr->next);
	
printf("%d \n",curr->var);
}
else
{
printf("%d \n",curr->var);
}


}

int main()
{
	head=(mynode*)0;
	add(1);
	add(2);
	add(3);
	add(4);
	print();

	rev(head);
	print();


}
