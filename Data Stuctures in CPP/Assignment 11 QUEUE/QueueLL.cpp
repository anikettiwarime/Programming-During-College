#include <iostream>
#include <conio.h>
using namespace std;
class Queue
{
    struct node
    {
        int item;
        node *next;
    };
    node *front;
    node *rear;
    public:
    Queue(){front=NULL;rear=NULL;}

    void push(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(rear==NULL)
        {
            rear=newnode;
            front=newnode;
            newnode->next=NULL;
        }
        else
        {
            newnode->next=NULL;
            rear->next=newnode;
            rear=newnode;
        }
    }

    void pop()
    {
        if(rear==NULL)
            cout<<"UnderFlow";
        else
        {
            node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    void frontView()
    {
        if(rear==NULL || front==NULL)
            cout<<"Underflow";
        else
            cout<<front->item;
        cout<<endl;
    }

    void rearView()
    {
        if(rear==NULL || front==NULL)
            cout<<"Underflow";
        else
            cout<<rear->item;
        cout<<endl;
    }
};

int menu()
{
    int choice;
    cout<<"\n1.Push";
    cout<<"\n2.Pop";
    cout<<"\n3.Exit";
    cout<<"\nEnter your choice\n";
    cin>>choice;
    return choice;
}
int input()
{
    int data;
    cout<<"Enter Data"<<endl;
    cin>>data;
    return data;
}
int main()
{
    Queue q;

    while (1)
    {
        cout<<endl<<"Front : "; q.frontView();
        cout<<endl<<"Rear : ";q.rearView();
        switch (menu())
        {
        case 1:
            q.push(input());
            break;
        case 2:
            q.pop();
            break;
        case 3:
            exit(0);
        default:
            cout<<endl<<"Invalid Choice";
            break;
        }
    }
    
    q.push(5);
    q.push(100);
    q.push(10);
    q.push(120);
    q.frontView();
    q.rearView();
    q.pop();
    q.frontView();
    q.rearView();
}