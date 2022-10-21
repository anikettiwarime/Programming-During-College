#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void insertAtLast(struct node **start,int item)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    newnode->data=item;
    newnode->link=NULL;
    if(*start==NULL)
        *start=newnode;
    else
    {
        temp=*start;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=newnode;
    }
}

void display(struct node *start)
{
    struct node *temp;
    if(start==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->link;
        }
    }
    
}
int main()
{
    struct node *head=NULL;
    display(head);
}