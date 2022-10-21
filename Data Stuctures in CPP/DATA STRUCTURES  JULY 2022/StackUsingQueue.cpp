#include <iostream>
using namespace std;
class Queue {
private:
    int front, rear, capacity, * ptr, lastindex;
public:
    Queue(int cap) {
        capacity = cap;
        ptr = new int[cap];
        front = 0;
        rear = 0;
        lastindex = -1;
    }

    void push(int data) {
        if (lastindex + 1 == capacity)
        {
            cout << "Queue is full" << endl;
            return;
        }
        ptr[rear % capacity] = data;
        rear++;
        lastindex++;
    }

    void pop()
    {
        if (lastindex == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        ptr[front % capacity] = -1;
        front++;
        lastindex--;
    }

    void printQueue() {
        if (lastindex == -1)
            cout << "Queue is empty" << endl;
        else
            for (int i = front;i < rear;i++)
                cout << ptr[i % capacity] << " ";
    }

    bool isEmpty() {
        if (lastindex == -1) return false;
        return true;
    }

    int frontElement() {
        if (lastindex == -1) return -1;
        return ptr[front % capacity];
    }

    int rearElement()
    {
        if (lastindex == -1) return -1;
        return ptr[rear % capacity];
    }
};

class Stack {
private:
    int top,cap;
    Queue *Q(int);
public:
    Stack(int x) {
        Q(x); 
    }

    void push(int x) {
        &Q(5);
    }
};

int main()
{
    //Write Your code Here

    return 0;
}
