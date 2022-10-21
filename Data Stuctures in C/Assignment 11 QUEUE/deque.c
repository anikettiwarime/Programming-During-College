#include <stdio.h>
#include <stdlib.h>

struct Deque
{
    int front,rear;
    int capcity;
    int *ptr;
};

struct Deque* createDeque(int cap)
{
    struct Deque *Q=NULL;
    Q=(struct Deque*)malloc(sizeof(struct Deque));
    Q->capcity=cap;
    Q->front=-1;
    Q->rear=-1;
    Q->ptr=(int*)malloc(sizeof(int)*cap);
    return Q;
}

void enqueAtfront(struct Deque *Q,int data)
{
    if((Q->rear+1==Q->capcity && Q->front==0) || ( Q->front+1==Q->rear) || (Q->rear+1==Q->front && Q->rear==0))
    {
        printf("Full");
        return;
    }
    else if(Q->front==-1)
        Q->front=Q->rear=0;
    else if(Q->front==0)
        Q->front=Q->capcity-1;
    else
        Q->front-=1;
    Q->ptr[Q->front]=data;
    printf("Value Inserted");
}

void enqueAtRear(struct Deque *Q,int data)
{
    if((Q->rear+1==Q->capcity && Q->front==0) || ( Q->front+1==Q->rear) || (Q->rear+1==Q->front && Q->rear==0))
    {
        printf("Full");
        return;
    }
    else if(Q->front==-1)
        Q->front=Q->rear=0;        
    else if(Q->rear+1==Q->capcity)
        Q->rear=0;
    else
        Q->rear++;
    Q->ptr[Q->rear]=data;
    printf("Value Inserted ");
}

void dequeueFront(struct Deque *Q)
{
    if(Q->front==-1)
        printf("\nUnderflow");
    else if(Q->front==Q->rear)
        Q->rear=Q->front=-1;
    else if(Q->front+1==Q->capcity)
        Q->front=0;
    else
        Q->front++;
    printf("Value deleted");
}

void dequeueRear(struct Deque *Q)
{
    if(Q->front==-1)
        printf("\nUnderflow");
    else if(Q->front==Q->rear)
        Q->rear=Q->front=-1;
    else if(Q->rear==0)
        Q->rear=Q->capcity-1;
    else
        Q->rear--;
    printf("Value deleted");
}

void display(struct Deque *Q)
{
    if(Q->front==-1)
        printf("Undeflow");
    else
    {
        int i=Q->front;
        printf("\nValue %d ",Q->ptr[i]);
        while(i!=Q->rear)
        {
            if(i==Q->capcity-1)
                i=0;  
            else
                i++;
            printf("%d ",Q->ptr[i]);
        }
    }
}

int menu()
{
    int choice;
    printf("\n1.Insert At Front\n2.Insert At Rear\n3.Delete At front\n4.Delete At Rear\n5.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    return choice;
}
int input()
{
    int data;
    printf("Enter Number to Enqueue\n");
    scanf("%d",&data);
    return data;
}

int main()
{
    struct Deque *Q=NULL;
    Q=createDeque(6);
    while(1)
    {
        display(Q);
        switch (menu())
        {
        case 1:
            enqueAtfront(Q,input());
            break;
        case 2:
            enqueAtRear(Q,input());
            break;
        case 3:
            dequeueFront(Q);
            break;
        case 4:
            dequeueRear(Q);
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}