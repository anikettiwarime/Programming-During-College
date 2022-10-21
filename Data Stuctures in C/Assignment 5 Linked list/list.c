#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
struct node{
    int item;
    struct node *next;
};

void insertAtLast(struct node **start)
{
    int data;
    printf("Insert data\n");
    scanf("%d",&data);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    newnode->next=NULL;
    if(*start==NULL)
        *start=newnode;
    else
    {
        struct node *t;
        t=*start;
        while(t->next!=NULL)
            t=t->next;
        t->next=newnode;
    }
}
void insertAfterGivenNode(struct node **start)
{
    int data,i=1;
    printf("Insert data\n");
    scanf("%d",&data);
    int position;
    printf("Enter position\n");
    scanf("%d",&position);
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->item=data;
    struct node *t=*start;
    while(t->next!=NULL)
    {
        if(i==position)
            break;
        i++;
        t=t->next;
    }
    newNode->next=t->next;
    t->next=newNode;
}

void insertAtStart(struct node **start)
{
    int data;
    printf("Insert data\n");
    scanf("%d",&data);
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    newnode->next=*start;
    *start=newnode;    
}

void deleteAtStart(struct node **start)
{
    if (*start==NULL)
        printf("List is Already Empty");
    else
    {
        struct node *temp;
        temp=*start;
        *start=temp->next;
        free(temp);
    }
}

void deleteAtLast(struct node **start)
{
    if (*start==NULL)
        printf("List is Already Empty");
    else
    {
        struct node *temp,*temp2;
        temp=*start;
        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp2->next;
        }
        if(temp2!=NULL)
            temp2->next=NULL;
        else
            *start=NULL;
        free(temp);
    }
}

void deleteAtGivenNode(struct node **start)
{
    int position,i=1;
    printf("Enter position\n");
    scanf("%d",&position);
    struct node *temp=*start,*temp2;
    while(i<position)
    {
        temp2=temp;
        temp=temp->next;
        i++;
    }
    temp2->next=temp->next;
    free(temp);
}
void display(struct node *start)
{
    if(start==NULL)
        printf("Empty");
    else
    {
        struct node *temp;
        temp=start;
        while(temp!=NULL)
        {
            printf("%d->",temp->item);
            temp=temp->next;
        }
        printf("NULL");
    }
}

void search(struct node *start)
{
    int Searchkey;
    printf("Enter data to search\n");
    scanf("%d",&Searchkey);
    if (start==NULL)
        printf("List is empty");
    else
    {
        int i=1;
        struct node *t=start;
        while(t->next!=NULL)
        {
            if(Searchkey==t->item)
                break;
            i++;
            t=t->next;
        }
        if(Searchkey==t->item)
            printf("%d is at %d position",Searchkey,i);
        else
            printf("%d not found",Searchkey);
    }
    printf("\nPress key to refresh ");
        getch();
}
int menu()
{
    int choice;
    printf("\n1.Insert at Start");
    printf("\n2.Insert at Last");
    printf("\n3.Insert after given node");
    printf("\n4.Delete first list item");
    printf("\n5.Delete last list item");
    printf("\n6.Delete list item at given node");
    printf("\n7.Search item");
    printf("\n8.Exit");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    struct node *head=NULL;
    while(1)
    {
       // system("cls");
        printf("\nList is : ");
        display(head);
        switch (menu())
        {
        case 1:
            insertAtStart(&head);
            break;
        case 2:
            insertAtLast(&head);
            break;
        case 3:
            insertAfterGivenNode(&head);
            break;
        case 4:
            deleteAtStart(&head);
            break;
        case 5:
            deleteAtLast(&head);
            break;
        case 6:
            deleteAtGivenNode(&head);
            break;
        case 7:
            search(head);
            break;
        case 8:
            exit(0);
        default:
        printf("\nInvalid choice!\nPlease retry");
            break;
        }
    }
}
