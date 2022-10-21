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

    void createStack(int cap)
    {
        capacity=cap;
        top=-1;
        ptr=new int[capacity];
    }

    void push(int data)
    {
        if(top+1==capacity)
            cout<<"Overflow"<<endl;
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
            top--;
    }
};

int main()
{
    Stack s(4);
    s.push(50);
    s.push(20);
    s.push(10);
    s.push(15);
    s.push(55);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
}