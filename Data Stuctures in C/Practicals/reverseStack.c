//Name : ANIKET BALENDRA TIWARI
//Roll no. 21143285
//Batch: I4

#include <stdio.h>
#include <stdlib.h>
struct Stack
{
    int capacity;
    int top;
    int *ptr;
};

struct Stack* createStack(int cap)
{
    struct Stack *s;
    s=(struct Stack*)malloc(sizeof(struct Stack));
    s->capacity=cap;
    s->ptr=(int *)malloc(sizeof(int)*cap);
    s->top=-1;
    return s;
}

void push(struct Stack *s,int data)
{
    if(s->capacity==s->top+1)
        printf("\nStack OverFlow\n");
    else
    {
        s->top++;
        s->ptr[s->top]=data;
    }
}

void pop(struct Stack *s)
{
    if(s->top==-1)
        printf("\nStack Underflow\n");
    else
        s->top--;
}

int peek(struct Stack *s)
{
    if(s->top==-1)
        return -1;
    else
        return s->ptr[s->top];
}

void display(struct Stack *s)
{
    printf("\nStack :");
    if(s->top==-1)
        printf("Empty\n");
    else
    {
        for(int i=0;i<=s->top;i++)
            printf("%d ",s->ptr[i]);
    }
}

void reverseStack(struct Stack **s)
{
   struct Stack *t=createStack((*s)->capacity);
   for(int i=0; i<=(*s)->top;i++)
   {
       push(t,(*s)->ptr[(*s)->top-i]);
   }
   free(*s);
   *s=t;
}

int menu()
{
    int choice;
    printf("\n1.Push ");
    printf("\n2.Pop ");
    printf("\n3.Peek ");
    printf("\n4.Reverse stack ");
    printf("\n5.Exit ");
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
    struct Stack *s;
    s=createStack(5);
    
    printf("Size of stack is %d",s->capacity);
    while (1)
    {
        int x;
        display(s);
        switch(menu())
        {
            case 1:
                push(s,input());
                break;
            case 2:
                pop(s);
                break;
            case 3:
                x=peek(s);
                if (x==-1)
                    printf("Stack is Empty");
                else
                    printf("\nTop element :%d\n",x);
                break;
            case 4:
                reverseStack(&s);
                break;
            case 5:
                exit(0);
            default :
                printf("Invalid choice");                
        }
    }
    
}