#include <iostream>
#include <stdio.h>
using namespace std;
class TWS
{
    int capacity;
    int *ptr;
    int top1;
    int top2;
    public:
    TWS(int cap)
    {
        capacity=cap;
        top1=-1;
        top2=cap;
        ptr=new int[cap];
    }
    
    void pushInTop1(int data)
    {
        if(top1+1==top2)
            cout<<"Stack is full";
        else
        {
            top1++;
            ptr[top1]=data;
        }
    }

    void pushInTop2(int data)
    {
        if(top1+1==top2)
            cout<<"Stack is full";
        else
        {
            top2--;
            ptr[top2]=data;
        }
    }

    void popInTop1()
    {
        if(top1==-1 && top2==capacity)
            cout<<"Stack is Empty";
        else
            top1--;
    }

    void popInTop2()
    {
        if(top1==-1 && top2==capacity)
            cout<<"Stack is Empty";
        else
            top2++;
    }

    int peekTop1()
    {
        if(top1==-1)
            return 0;
        else
            return ptr[top1];
    }

    int peekTop2()
    {
        if(top1==-1)
            return 0;
        else
            return ptr[top2];
    }
};

int menu()
{
    int choice;
    cout<<"\n1.Push in Top1";
    cout<<"\n2.Push in Top1";
    cout<<"\n3.Pop in Top1";
    cout<<"\n4.Pop in Top1";
    cout<<"\n5.Exit";
    cout<<"\n5.Enter Your choice"<<endl;
    cin>>choice;
    return choice;
}

int input()
{
    int data;
    cout<<"Input"<<endl;
    cin>>data;
    return data;
}

int main()
{
    TWS s(6);
    while (1)
    {
        cout<<endl<<s.peekTop1();
        cout<<endl<<s.peekTop2();
        switch (menu())
        {
        case 1:
            s.pushInTop1(input());
            break;
        case 2:
            s.pushInTop2(input());
            break;
        case 3:
            s.popInTop1();
            break;
        case 4:
            s.popInTop2();
            break;
        case 5:
            exit(0);
        default:
            cout<<"Invalid choice";
            break;
        }
    }
    
}