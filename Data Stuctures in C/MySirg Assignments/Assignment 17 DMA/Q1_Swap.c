#include<stdio.h>
#include<stdlib.h>
int queue[50],i,choice,n;
int front=-1,rear=-1;
void insert(void);
void delete(void);
void display(void);
int main()
{
printf("Enter the size of queue:-");
scanf("%d",&n);

do
{
printf("\nChoose choice from below:-");
printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit");
printf("\nEnter your choice:-");
scanf("\n%d",&choice);
switch(choice)
{
    case 1:
    {
        insert();
        break;
    }
    case 2:
    {
            
        delete();
        break;
   }
    case 3:
    {   
        display();
        break;
    }
    case 4: 
    {
      printf("\nEnd of process.");
      break;
    }
    default:
    {
        printf("Choose valid choice from 1,2,3,4.");    
    }
}
}
while (choice!=4);
return 0;
}
void insert()
{
int item;
printf("\nEnter the element:-");
scanf("%d",&item);
if(rear == n-1)
{
    printf("\nOverflow");
    
}
if(front==-1 && rear==-1)
{
    front=0;
    rear=0;
}
else
{
    rear=rear+1;
}
queue[rear]=item;
printf("\n Value inserted.");
}
void delete()
{
    int item;
    if(front==-1 || front>rear)
    {
        printf("\nUnderflow");
    }
    else
    {
        item=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=front+1;
        }
        printf("\nValue deleted");
    }
}
void display()
{
    if(front>=0 || rear>=0 )
    {
    printf("The Elements in Queue are:-");
    for( i=front;i<=rear;i++)
    printf("\n%d",queue[i]);
    printf("\nEnter next choice-");
    }  
    else
    printf("\nThe Queue is empty.");
}
