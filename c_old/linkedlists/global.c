#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int value;
struct node *next;
}mynode;

//mynode *head,*tail,*temp;

void add(int val,mynode **head,mynode **tail, mynode **temp)
{
	temp = (mynode*)malloc(sizeof(mynode));
	temp->value = val;
	temp->next = NULL;

	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}

	tail->next= temp;
	tail =temp;

}

void print()
{
	for(temp=head;temp!=NULL;temp=temp->next)
	{
		printf(" %d " ,temp->value);
	}
}

void removel()
{
	temp = head;
	while(temp->next->next!=NULL)
		temp=temp->next;

	tail=temp;
	temp->next=NULL;

}

int main()
{
	mynode *head,*tail,*temp;
	head=NULL;
	add(1,&head,&tail,&temp);
	add(2,&head,&tail,&temp);
	add(3,&head,&tail,&temp);
	add(4,&head,&tail,&temp);
	add(5,&head,&tail,&temp);
	print();
	removel();
	print();
		
}
