#include <iostream>
using namespace std;

class Stack {
private:
    int  capacity, top, * ptr;
public:
    Stack(int cap) {
        capacity = cap;
        top = -1;
        ptr = new int[cap];
    }

    void push(int data)
    {
        if (top + 1 == capacity)
            cout << "Stack is full" << endl;
        else
            ptr[++top] = data;
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack is empty" << endl;
        else
            top--;
    }

    int size()
    {
        return top + 1;
    }

    int capacity() {
        return capacity;
    }

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};


int main() {

    return 0;
}