#include <iostream>
#include <map>
using namespace std;

// int q[0, 1, 2, 3, 4];

class Queue
{
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
            cout << "Queue is full" << endl;
        else
        {
            ptr[rear % capacity] = data;
            rear++;
            lastindex++;
        }
    }

    void pop()
    {
        if (lastindex == -1)
            cout << "Queue is empty" << endl;
        else {
            ptr[front % capacity] = -1;
            front++;
            lastindex--;
        }
    }


    void printQueue() {
        if (lastindex == -1)
            cout << "Queue is empty" << endl;
        else
            for (int i = front;i < rear;i++)
                cout << ptr[i % capacity] << " ";
    }

    bool isEmpty()
    {
        if (lastindex == -1)
            return false;
        return true;
    }

    int frontElement()
    {
        if (lastindex == -1)
            return -1;
        return ptr[front % capacity];
    }

    int rearElement()
    {
        if (lastindex == -1)
            return -1;
        return ptr[rear % capacity];
    }


};


int main()
{
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(50);
    cout << q.frontElement() << endl;
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(60);
    q.push(00);
    q.push(40);
    q.push(30);
    q.printQueue();
}