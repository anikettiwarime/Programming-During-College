#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int item;
    struct node *prev;
    struct node *next;
};

void insertAtStart(struct node **head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    newnode->prev=NULL;
    newnode->next=*head;
    if(*head!=NULL)
        (*head)->prev=newnode;
    *head=newnode;
}

void insertAtLast(struct node **head,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->item=data;
    if(*head==NULL)
    {
        newnode->prev=NULL;
        *head=newnode;
    }
    else
    {
        struct node *t=*head;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=newnode;
        newnode->prev=t;
    }
}

struct node* find(struct node *head, int searchkey)
{
    while(head)
    {
        if(head->item==searchkey)
            return head;
        head=head->next;
    }
    return NULL;
}

int input()
{
    int data;
    printf("Enter Data\n");
    scanf("%d",&data);
    return data;
}

void insertAt(struct node *temp,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node)); // creating variable
    newnode->item=data;    // insert data
    newnode->next=temp->next;  // assign the next value of current nodes next
    newnode->prev=temp;     // assign address of current node to newnodes previous pointer
    if(temp->next!=NULL)   // check if the current block does not contain null
        temp->next->prev=newnode; // then assign new nodes address 
    temp->next=newnode;
}

void deleteFirst(struct node **head)
{   if(*head==NULL)
        return;
    else if((*head)->next==NULL)  // if list contains only one node 
    {
        free(*head);             // free the starting node 
        *head=NULL;              // assign null to starting node
    }
    else if((*head)->next!=NULL) // check if list contains more than 1 node if true then
    {
        struct node *temp=(*head)->next; // assign next of start
        free(*head);             // now free the start node
        temp->prev=NULL;         // assign null to prev pointer of new first node
        *head=temp;              // pointer temp as starting node
    }
}

void deleteLast(struct node **head)
{
    if(*head==NULL)
        return;
    else
    {
        struct node *temp=(*head);
        while(temp->next!=NULL)   //traversing 
            temp=temp->next;      //assigning t->next in t
        if((*head)->prev==NULL)   //checking if there is only one node
            *head=NULL;           //then assigning null to head pointer
        else
            temp->prev->next=NULL; // else storing null in next of node privious to temp
        free(temp);                // deleting last node for both case
    }
}

void deleteAt(struct node *temp)
{
    if(temp==NULL)
        printf("Empty");
    else
    {
        temp->prev->next=temp->next;
        free(temp);
    }
}
void display(struct node *head)
{
    if(head==NULL)               // if list is empty
        printf("NULL");
    else
    {
        struct node *t=head;
        while(t!=NULL)              //transversing till last node
        {
            printf("%d->",t->item); //printing each node during one cycle
            t=t->next;              //assigning address of next node in current node
        }
        printf("NULL");             //printing null in last of list
    }
}

void displayRev(struct node *head)
{
    if (head==NULL)
        printf("NULL");
    else
    {
        struct node *t=head;  //storing head in temp pointer
        while(t->next!=NULL)  //
            t=t->next;
        while (t!=NULL)
        {
            printf("%d->",t->item);
            t=t->prev;
        }
        printf("NULL");
    }
}

int menu()
{
    int choice;
    printf("\n1.Insert At Start");
    printf("\n2.Insert At Last");
    printf("\n3.Insert node after ");
    printf("\n4.Delete first");
    printf("\n5.Delete Last");
    printf("\n6.Delete node");
    printf("\n7.Search given node");
    printf("\n8.Exit");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    return choice;
}
int main()
{
    //getch();
    struct node *start=NULL;  
    while (1)
    {
        //system("cls");
        printf("\nList contains ");
        display(start);
        printf("\nReverse List is ");
        displayRev(start);
        switch (menu())
        {
        case 1:
            insertAtStart(&start,input());
            break;
        case 2:
            insertAtLast(&start,input());
            break;
        case 3:
            insertAt(find(start,input()),input());
            break;
        case 4:
            deleteFirst(&start);
            break;
        case 5:
            deleteLast(&start);
            break;
        case 6:
            deleteAt(find(start,input()));
            break;
        case 7:
            find(start,input());
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid choice");
            getch();
            break;
        }
    }
}