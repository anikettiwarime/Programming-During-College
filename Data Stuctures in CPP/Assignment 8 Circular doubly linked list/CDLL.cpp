#include <iostream>
#include <conio.h>
using namespace std;
class CDLL
{
    struct node
    {
        node *prev;
        int item;
        node *next;
    };
    node *last;
    public:
        CDLL(){last=NULL;}

    void insertAtStart(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(last==NULL)
        {
            newnode->prev=newnode;
            newnode->next=newnode;
            last=newnode;
        }
        else
        {
            newnode->next=last->next;
            newnode->prev=last;
            last->next->prev=newnode;
            last->next=newnode;
        }
    }
    
    void insertAtLast(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if (last==NULL)
        {
            newnode->next=newnode;
            newnode->prev=newnode;
            last=newnode;            
        }
        else
        {
            newnode->next=last->next;
            newnode->prev=last;
            last->next->prev=newnode;
            last->next=newnode;
            last=newnode;
        }
    }

    node* find()
    {
        int searchkey;
        cout<<"Enter node value"<<endl;
        cin>>searchkey;
        node *temp=last;
        while (temp->next!=last)
        {
            if(temp->item==searchkey)
                return temp;
            temp=temp->next;
        }
        if(temp->item==searchkey)
            return temp;
        return NULL;    
    }

    void insertAfter(int data)
    {
        node *newnode=new node;
        newnode->item=data;
        if(last==NULL)
        {
            newnode->next=newnode;
            newnode->prev=newnode;
            last=newnode;
        }
        else
        {
            node* temp=find();
            newnode->next=temp->next;
            newnode->prev=temp;
            temp->next->prev=newnode;
            temp->next=newnode;
            if(temp==last)
                last=newnode;
        }
    }

    void deleteStart()
    {
        if(last==NULL)
            display();
        else
        if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *temp=last->next;
            last->next=temp->next;
            temp->next->prev=last;
            delete temp;
        }
    }

    void deleteLast()
    {
        if(last==NULL)
            display();
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *temp=last->prev;
            temp->next=last->next;
            last->next->prev=temp;
            delete last;
            last=temp;
        }
    }

    void deleteNode()
    {
        node* temp=find();
        if (last==NULL)
            display();
        else
        if(temp==last && last!=last->next)
        {
            temp->prev->next=last->next;
            delete last;
            last=temp;
        }
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            temp->prev->next=temp->next;
            temp->next=temp->next->next;
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
    CDLL l;
    l.display();
    l.insertAtStart(25);
    l.display();
    l.insertAtStart(45);
    l.display();
    l.insertAtStart(35);
    l.display();
    l.insertAtLast(5);
    l.display();
    l.insertAtStart(55);
    l.display();
    l.deleteNode();
    l.display();
}