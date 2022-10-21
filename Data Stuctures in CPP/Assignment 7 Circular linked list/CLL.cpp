#include <iostream>
#include <conio.h>
using namespace std;
class CLL
{
    struct node
    {
        int item;
        node *next;
    };
    node *last;
    public:
    CLL(){last=NULL;}
    
    node* find()
    {
        int searchkey;
        cout<<"Enter Node Value"<<endl;
        cin>>searchkey;
        node *temp=last;
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
    
    void insertAtStart(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            last=newnode;
        }
        else
        {
            newnode->next=last->next;
            last->next=newnode;
        }
    }
    void insertAtLast(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            last=newnode;
        }
        else
        {
            newnode->next=last->next;
            last->next=newnode;
            last=newnode;
        }
    }
    
    void insertAfter(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            last=newnode;
        }
        else
        {
            node *temp=find();
            newnode->next=temp->next;
            temp->next=newnode;
            if(temp==last)
                last=newnode;
        }
    }

    void deleteStart()
    {
        if(last==NULL)
        {
            cout<<"List is Empty";
        }
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *temp=last->next;
            last->next=last->next->next;
            delete temp;
        }
    }

    void deleteLast()
    {
        if(last==NULL)
            cout<<"List is Empty"<<endl;
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *temp=last;
            while(temp->next!=last)
                temp=temp->next;
            temp->next=last->next;
            delete last;
            last=temp;
        }
    }

    void deleteNode()
    {
        node *temp=find();
        if(last==NULL)
            cout<<"List is Empty"<<endl;
        else if(last==temp && last!=last->next)
        {
            node *temp=last;
            while(temp->next!=last)
                temp=temp->next;
            temp->next=last->next;
            delete last;
            last=temp;
        }
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else if(last->next==temp)
        {
            last->next=temp->next;
            delete temp;
        }
        else
        {
            node *t=last;
            while(t->next!=temp)
                t=t->next;
            t->next=temp->next;
            delete temp;
        }
    }
    void display()
    {
        if(last==NULL)
            cout<<"Empty";
        else
        {
            node *t=last->next;
            do
            {
                cout<<t->item<<" ";
                t=t->next;
            }while(t!=last->next);
        }
        cout<<endl;
    }
};

int main()
{
    CLL l;
    /*l.insertAtStart(50);
    l.display();
    l.insertAtStart(5);
    l.display();
    l.insertAtLast(20);
    l.display();
    l.insertAtStart(25);
    l.display();
    l.insertAtLast(65);
    l.display();
    l.deleteStart();
    l.display();
    l.deleteLast();
    l.display();*/
    l.insertAtLast(55);
    l.display();
    l.deleteNode();
    l.display();
}