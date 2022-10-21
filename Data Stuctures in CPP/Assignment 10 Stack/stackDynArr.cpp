#include <iostream>
#include <conio.h>
using namespace std;
class Stack
{
    private:
        int capacity;
        int top;
        int *ptr;
    public:
    Stack(int x)
    {
        capacity=x;
        top=-1;
        ptr=new int[capacity];
    }
    void doublestack()
    {
        int *temp=new int[capacity*2];
        for (int i = 0; i <= top; i++)
            temp[i]=ptr[i];
        delete ptr;
        ptr=temp;
        capacity*=2;
    }
    void halfstack()
    {
        int *temp=new int[capacity/2];
        for (int i = 0; i <= top; i++)
            temp[i]=ptr[i];
        delete ptr;
        ptr=temp;
        capacity/=2;
    }
    void createStack(int cap)
    {
        capacity=cap;
        top=-1;
        ptr=new int[capacity];
    }

    void push(int data)
    {
        if(top+1==capacity)
        {
            doublestack();
            top++;
            ptr[top]=data;
        }
        else
        {
            top++;
            ptr[top]=data;
        }
    }

    int peek()
    {
        if(top<0)
            return -1;
        else
            return ptr[top];
    }

    void pop()
    {
        if(top<0)
            cout<<"Underflow";
        else
        {
            top--;
        }
        if(capacity==top+1/2)
            halfstack();
    }
};

int main()
{
    Stack s(2);
    s.push(50);
    s.push(20);
    s.push(10);
    s.push(15);
    s.push(55);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
}