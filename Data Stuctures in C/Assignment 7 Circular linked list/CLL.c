//Name: Aniket Balendra Tiwari
//Roll No: 21143285
//Batch: I4
/*
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
struct node{
    int item;
    struct node *next;
};

void insertAtStart(struct node **last,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    if(*last==NULL)
    {
        newnode->next=newnode;
        *last=newnode;
    }
    else
    {
        newnode->next=(*last)->next;
        (*last)->next=newnode;
    }
}

void insertAtLast(struct node **last,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->item=data;
    if (*last==NULL)
    {
        newnode->next=newnode;
        *last=newnode;
    }
    else
    {
        newnode->next=(*last)->next;
        (*last)->next=newnode;
        *last=newnode;
    }
}

struct node* find(struct node *last)
{
    int searchkey;
    printf("Enter Node Value\n");
    scanf("%d",&searchkey);
    struct node *temp=last;
    while(temp->next!=last)
    {
        if(temp->item==searchkey)
            return temp;
        temp=temp->next;
    }
    if(temp->item==searchkey)
                return temp;
        return NULL;
}

void insertAfterGivenNode(struct node **last,int data)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
        newnode->item=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            last=newnode;
        }
        else
        {
            struct node *temp=find(*last);
            newnode->next=temp->next;
            temp->next=newnode;
            if(temp==last)
                last=newnode;
        }    
}

void deleteAtStart(struct node **last)
{
    if (*last==NULL)
        printf("List is Already Empty");
    else if((*last)->next==last)
        {
            free(*last);
            *last=NULL;
        }
        else
        {
            struct node *temp=(*last)->next;
            last->next=last->next->next;
            delete temp;
        }
}

void deleteAtLast(struct node **last)
{
    if (*last==NULL)
        printf("List is Already Empty");
    else
    {
        struct node *temp,*temp2;
        temp=*last;
        while(temp->next!=NULL)
        {
            temp2=temp;
            temp=temp2->next;
        }
        if(temp2!=NULL)
            temp2->next=NULL;
        else
            *last=NULL;
        free(temp);
    }
}

void deleteAtGivenNode(struct node **last)
{
    int position,i=1;
    printf("Enter position\n");
    scanf("%d",&position);
    struct node *temp=*last,*temp2;
    while(i<position)
    {
        temp2=temp;
        temp=temp->next;
        i++;
    }
    temp2->next=temp->next;
    free(temp);
}
void display(struct node *last)
{
    if(last==NULL)
        printf("Empty");
    else
    {
        struct node *temp;
        temp=last;
        while(temp!=NULL)
        {
            printf("%d->",temp->item);
            temp=temp->next;
        }
        printf("NULL");
    }
}

void search(struct node *last)
{
    int Searchkey;
    printf("Enter data to search\n");
    scanf("%d",&Searchkey);
    if (last==NULL)
        printf("List is empty");
    else
    {
        int i=1;
        struct node *t=last;
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
    struct node *last=NULL;
    while(1)
    {
       // system("cls");
        printf("\nList is : ");
        display(last);
        switch (menu())
        {
        case 1:
            insertAtStart(&last);
            break;
        case 2:
            insertAtLast(&last);
            break;
        case 3:
            insertAfterGivenNode(&last);
            break;
        case 4:
            deleteAtStart(&last);
            break;
        case 5:
            deleteAtLast(&last);
            break;
        case 6:
            deleteAtGivenNode(&last);
            break;
        case 7:
            search(last);
            break;
        case 8:
            exit(0);
        default:
        printf("\nInvalid choice!\nPlease retry");
            break;
        }
    }
}
*/
//Name: Aniket Balendra Tiwari
//Roll No: 21143285
//Batch: I4

#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void beginsert ();   
void lastinsert ();  
void randominsert();  
void begin_delete();  
void last_delete();  
void random_delete();  
void display();  
void search();  

int menu()
{
    int choice;
    printf("\n1.Insert at Start");
    printf("\n2.Insert at Last");
    printf("\n3.Delete first list item");
    printf("\n4.Delete last list item");
    printf("\n5.Search item");
    printf("\n6.Exit");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    return choice;
}
void main ()  
{  
    while(1)   
    {  
        display();
        switch(menu())  
        {  
            case 1:  
                beginsert();      
                break;  
            case 2:  
                lastinsert();         
                break;  
            case 3:  
                begin_delete();       
                break;  
            case 4:  
                last_delete();        
                break;  
            case 5:  
                search();         
                break;   
            case 6:  
                exit(0);
            default:  
                printf("Please enter valid choice..");  
        }  
    }  
}  
void beginsert()  
{  
    struct node *ptr,*temp;   
    int item;   
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else   
    {  
        printf("\nEnter the node data :");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;  
        }  
        else   
        {     
            temp = head;  
            while(temp->next != head)  
                temp = temp->next;  
            ptr->next = head;   
            temp -> next = ptr;   
            head = ptr;  
        }   
        printf("\nnode inserted\n");  
    }  
              
}  
void lastinsert()  
{  
    struct node *ptr,*temp;   
    int item;  
    ptr = (struct node *)malloc(sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {  
        printf("\nEnter Data: ");  
        scanf("%d",&item);  
        ptr->data = item;  
        if(head == NULL)  
        {  
            head = ptr;  
            ptr -> next = head;    
        }  
        else  
        {  
            temp = head;  
            while(temp -> next != head)  
            {  
                temp = temp -> next;  
            }  
            temp -> next = ptr;   
            ptr -> next = head;  
        }  
          
        printf("\nnode inserted\n");  
    }  
  
}  
  
void begin_delete()  
{  
    struct node *ptr;   
    if(head == NULL)  
    {  
        printf("\nUNDERFLOW");    
    }  
    else if(head->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
    }  
      
    else  
    {   ptr = head;   
        while(ptr -> next != head)  
            ptr = ptr -> next;   
        ptr->next = head->next;  
        free(head);  
        head = ptr->next;  
        printf("\nnode deleted\n");  
  
    }  
}  
void last_delete()  
{  
    struct node *ptr, *preptr;  
    if(head==NULL)  
    {  
        printf("\nUNDERFLOW");  
    }  
    else if (head ->next == head)  
    {  
        head = NULL;  
        free(head);  
        printf("\nnode deleted\n");  
  
    }  
    else   
    {  
        ptr = head;  
        while(ptr ->next != head)  
        {  
            preptr=ptr;  
            ptr = ptr->next;  
        }  
        preptr->next = ptr -> next;  
        free(ptr);  
        printf("\nnode deleted\n");  
  
    }  
}  
  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag=1;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        if(head ->data == item)  
        {  
        printf("item found at location %d",i+1);  
        flag=0;  
        }  
        else   
        {  
        while (ptr->next != head)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        }  
        if(flag != 0)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr=head;  
    if(head == NULL)  
    {  
        printf("\nList is Empty");  
    }     
    else  
    {  
        printf("\nList : ");  
          
        while(ptr -> next != head)  
        {  
          
            printf("%d ", ptr -> data);  
            ptr = ptr -> next;  
        }  
        printf("%d ", ptr -> data);  
    }  
              
}  
