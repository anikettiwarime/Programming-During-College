#include <iostream>
#include <conio.h>
using namespace std;
class StackL
{
    struct node
    {
        int item;
        node *prev;
    };
    node *top;
    public:
        StackL(){top=NULL;}
    void push(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(top==NULL)
            newnode->prev=NULL;
        else
            newnode->prev=top;
        top=newnode;
    }

    int peek()
    {
        if(top==NULL)
            return -1;
        else
            return top->item;
    }
    void pop()
    {
        if(top==NULL)
            cout<<"Underflow";
        else
        {
            node *temp=top;
            top=top->prev;
            delete temp;
        }
    }
};

int main()
{
    StackL s;
    s.push(10);
    cout<<s.peek()<<endl;
    s.push(20);
    cout<<s.peek()<<endl;
    s.push(30);
    cout<<s.peek()<<endl;
    s.push(40);
    cout<<s.peek()<<endl;
    s.push(50);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
}