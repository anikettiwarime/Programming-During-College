#include <iostream>
#include <stdio.h>
#include <conio.h>
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
        List()
        {
            start=NULL;
        }
        void insertAtStart()
        {
            int data;
            cout<<"Enter number"<<endl;
            cin>>data;
            node *n=new node;
            n->item=data;
            n->next=start;
            start=n;
        }
        void insertAtLast()
        {
            int data;
            cout<<"Enter number"<<endl;
            cin>>data;
            node *n=new node;
            n->item=data;
            n->next=NULL;
            if(start==NULL)
                start=n;
            else
            {
                node *temp=start;
                while (temp->next!=NULL)
                    temp=temp->next;
                temp->next=n;
            }
        }
        void insertAt()
        {
            int data;
            cout<<"Enter number"<<endl;
            cin>>data;
            node *temp=search();
            node *n=new node;
            n->item=data;
            n->next=temp->next;
            temp->next=n;
        }
        void deleteStart()
        {
            if(start!=NULL)
            {
                node *temp=start;
                start=start->next;
                delete temp;
            }
        }
        void deleteLast()
        {
            if(start!=NULL)
            {
                node *temp=start,*temp2=NULL;
                while(temp->next!=NULL)
                {
                    temp2=temp;
                    temp=temp->next;
                }
                if(temp2!=NULL)
                    temp2->next=NULL;
                else
                    start=NULL;
                delete temp;
            }
        }
        void deleteNode()
        {
            node *temp=search(),*temp2;
            if (start==temp)
                delete start;
            else
            {
                temp2=start;
                while(temp2->next!=temp)
                    temp2=temp2->next;
                temp2->next=temp->next;
                delete temp;
            }                    
        }

        void reverseList()
        {
            node *temp= new node;
            node *t1,*t2;
            
        }
        node* search()
        {
            int searchkey;
            cout<<"Enter node value"<<endl;
            cin>>searchkey;
            node *temp=start;
                while(searchkey!=temp->item)
                {
                    temp=temp->next;
                }
                return temp;
        }
        void display()
        {
            node *t=start;
            while (t!=NULL)
            {
                cout<<t->item<<"->";
                t=t->next;
            }
            cout<<"NULL";
        }
        ~List()
        {
            while(start!=NULL)
                deleteStart();
        }
};
int menu()
{
    int choice;
    cout<<"\n1.Insert At start";
    cout<<"\n2.Insert At Last";
    cout<<"\n3.Insert After Given node";
    cout<<"\n4.Search";
    cout<<"\n5.Delete start";
    cout<<"\n6.Delete Last";
    cout<<"\n7.Delete Node";
    //cout<<"\n7.Insert At start";
    cout<<"\n8.Exit";
    cout<<"\nEnter your choice"<<endl;
    cin>>choice;
    return choice;
}
int main()
{
    List l;


    while (1)
    {
        system("cls");
        cout<<endl<<"List contains ";
        l.display();
        switch (menu())
        {
        case 1:
            l.insertAtStart();
            break;
        case 2:
            l.insertAtLast();
            break;
        case 3:
            l.insertAt();
            break;
        case 4:
            cout<<l.search();
            break;
        case 5:
            l.deleteStart();
            break;
        case 6:
            l.deleteLast();
            break;
        case 7:
            l.deleteNode();
            break;
        case 8:
           exit(0);
        default:
            cout<<"Invalid choice"<<endl;
            getch();
            break;
        }
    }
}