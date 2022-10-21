//Name : ANIKET BALENDRA TIWARI
//Roll no. 21143285
//Batch: I4

#include <stdio.h>
#include <stdlib.h>

struct Queue 
{
    int rear;
    int front;
    int capacity;
    int *ptr;
};

struct Queue* createqueue(int cap)
{
    struct Queue *q=NULL;
    q=(struct Queue*)malloc(sizeof(struct Queue));
    q->capacity=cap;
    q->front=-1;
    q->rear=-1;
    q->ptr=(int*)malloc(sizeof(int)*cap);
    return q;
}

void enqueue(struct Queue *q,int data) //insertion
{
    if(q->rear+1==q->capacity)
        printf("\nQueue is Full");
    else if(q->front==-1)
    {
        q->rear=q->front=0;
        q->ptr[q->rear]=data;
    }    
    else
    {
        q->rear++;
        q->ptr[q->rear]=data;
    }
}

void dequeue(struct Queue *q)
{
    if(q->rear==-1)
        printf("Queue is empty");
    else
    {   for(int i=0;i<q->rear;i++)
            q->ptr[i]=q->ptr[i+1];
        q->rear--;
    }
}

void display(struct Queue *q)
{
    printf("\nQueue : ");
    if(q->front==-1)
        printf("Empty");
    else
    {
        
        for(int i=q->front;i<=q->rear;i++)
            printf("%d ",q->ptr[i]);
    }
}

int menu()
{
    int choice;
    printf("\n1.Enqueue ");
    printf("\n2.Dequeue ");
    printf("\n3.Exit ");
    printf("\nEnter your choice\n");
    scanf("%d",&choice);
    return choice;
}

int input()
{
    int data;
    printf("Enter Value\n");
    scanf("%d",&data);
    return data;
}

int main()
{
    struct Queue *q;
    q=createqueue(5);
    
    printf("Size of queue is %d",q->capacity);
    while (1)
    {
        int x;
        display(q);
        switch(menu())
        {
            case 1:
                enqueue(q,input());
                break;
            case 2:
                dequeue(q);
                break;
            case 3:
                exit(0);
            default :
                printf("Invalid choice");                
        }
    }
    
}