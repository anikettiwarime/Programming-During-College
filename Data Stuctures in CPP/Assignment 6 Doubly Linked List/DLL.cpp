#include <iostream>
#include <conio.h>
using namespace std;
class List
{
    struct node
    {
        node *prev;
        int item;
        node *next;
    };
    node *head;
    public:
    List(){head=NULL;}             // Constructor
    
    int input()
    {
        int data;
        cout<<"Enter your data"<<endl;
        cin>>data;
        return data;
    }

    void insertAtStart(int data)
    {
        node *newnode=new node;   // create node
        newnode->prev=NULL;       // insert Null in prev in newnode
        newnode->item=data;       // insert data
        if(head!=NULL)            // checking is there node present or not
            head->prev=newnode;   // assign newnode address in the current start pointer
        newnode->next=head;       // assign start in newnode's next
        head=newnode;             // now point start to newnode
    }
    
    void insertAtLast(int data)
    {
        node *newnode=new node;  // creating new node
        newnode->item=data;      // inserting data
        newnode->next=NULL;      // inserting null as it will be going to be the last node
        if(head==NULL)           // checking is there node or not
        {
            newnode->prev=NULL;  // if yes then assign null in previous pointer of new node
            head=newnode;        // now point start to newnode
        }
        else                     // if the node is present 
        {  
            node *t=head;        // create traversing pointer t of node type assign start to it.
            while(t->next!=NULL) // while we don't find NULL in the next of t pointer 
                t=t->next;       // assing next nodes address in t node
            t->next=newnode;     // after traversing, assign newnode's address in the next of t pointer
            newnode->prev=t;     // assign t as the prevnode of new node
        }
    }

    node* search(int searchkey)
    {
        node *t=head;
        int count=0;
        while(t)
        {
            if(t->item==searchkey)
                return t;
            t=t->next;
        }
        //cout<<"found "<<t->item<<" at "<<count;
        return NULL;
    }

    void insertAt(int data)
    {
        node *temp=search(input());
        node *newnode=new node;        // creating variable
        newnode->item=data;            // insert data
        newnode->next=temp->next;
        newnode->prev=temp;
        if(temp->next!=NULL)
            temp->next->prev=newnode;
        temp->next=newnode;
    }
    void deleteFirst()
    {
        node *t=head;
        if(head==NULL)
            cout<<"List is Empty";
        else
        {
            head=head->next;
            if(t->next!=NULL)
                head->prev=NULL;
            delete t;
        }
    }

    void deleteLast()
    {
        node *t=head;
        if(head==NULL)
            cout<<"List is Empty";
        else
        {
            while(t->next!=NULL)
                t=t->next;
            if(t->prev!=NULL)
                t->prev->next=t->next;
            else
                head=t->next;
            delete t;
        }
    }

    void deleteNode()
    {
        node *t=search(input());
        if(t==NULL)
            cout<<"List is empty";
        else
        {
            if(t->prev!=NULL)
                t->prev->next=t->next;
            else
                head=t->next;
            if(t->next!=NULL)
                t->next->prev=t->prev;
            delete t;
        }
    }
    void display()
    {
        node *t=head;                  // use t pointer for traversing
        while(t!=NULL)                 // while we don't find full in t pointer
        {
            cout<<t->item<<" ";        // print data 
            t=t->next;                 // assign next node address in t
        }
    }
};

int menu()
{
    int choice;
    cout<<"\n1.Insert At start";
    cout<<"\n2.Insert At last";
    cout<<"\n3.Insert After";
    cout<<"\n4.Search ";
    cout<<"\n5.Delete First node";
    cout<<"\n6.Delete Last node";
    cout<<"\n7.Delete Node";
    cout<<"\n8.Exit";
    cout<<"\nEnter Your choice"<<endl;  
    cin>>choice;
    return choice;
}

int main()
{
    List li;

    while(1)
    {
        cout<<"\nList : ";
        li.display();
        switch (menu())
        {
        case  1:
            li.insertAtStart(li.input());
            break;
        case 2:
            li.insertAtLast(li.input());
            break;
       case 3:
            li.insertAt(li.input());
            break;
        case 4:
            li.search(li.input());
            break;
        case 5:
            li.deleteFirst();
            break;
        case 6:
            li.deleteLast();
            break;
        case 7:
            li.deleteNode();
            break;
        case 8:
            exit(0);
        default:
        cout<<"Invalid choice";
            break;
        }
    }
   
}