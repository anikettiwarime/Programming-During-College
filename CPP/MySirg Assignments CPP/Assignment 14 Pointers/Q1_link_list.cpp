#include <iostream>
#include <stdio.h>
using namespace std;
class List
{
    struct node
    {
        int item;
        node *next;
    };

    node *start;
    public:
    List(){start=NULL;}
    
    void addAtStart(int data)
    {
        node *n=new node;
        n->item=data;
        n->next=start;
        start=n;
    }
    void addAtLast(int data)
    {
        node *n = new node;
        n->item=data;
        n->next=NULL;
        if(start==NULL)
            start=n;
        else
        {
         node* t=start;
            while(t->next!=NULL)
                t=t->next;
            t->next=n;
        }
    }

    void viewList()
    {
        node *t=start;
        while (t!=NULL)
        {
            cout<<t->item<<"->";
            t=t->next;
        }
        cout<<"NULL"<<endl;
    }

    void removeFirst()
    {
        if(start==NULL)
            cout<<"List is Empty";
        else
        {
            node *r=start;            
            start=start->next;
            delete r;
        }
    }
    void deleteLast()
    {
        if(start==NULL)
            cout<<"List is Empty";
        else if (start->next==NULL){
            delete start;
            start=NULL;
        }
        else
            {
                node *temp=start;
                node *r=start;
                while (temp->next!=NULL)
                {
                    r=temp;
                    temp=temp->next;
                }               
                r->next=NULL;
                delete temp;
                temp=NULL;
            }
    }

    ~ List()
    {
        while (start!=NULL)
            removeFirst();
    }
};

int main()
{
    List l1;
    l1.addAtLast(10);
    l1.addAtLast(20);
    l1.addAtLast(40);
    l1.addAtLast(30);
    l1.viewList();
    l1.deleteLast();
    l1.viewList();
    l1.deleteLast();
    l1.viewList();
}