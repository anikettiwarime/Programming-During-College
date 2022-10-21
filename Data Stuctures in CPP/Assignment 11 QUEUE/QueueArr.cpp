#include <iostream>
#include <conio.h>
using namespace std;
class QueueA
{
private:
    int capacity;
    int rear, front;
    int* ptr;
public:
    QueueA(int cap)
    {
        rear = -1;
        front = -1;
        capacity = cap;
        ptr = new int[capacity];
    }

    void enQueue(int data)
    {
        if (rear + 1 == capacity && front == 0 || rear + 1 == front)
            cout << "OverFlow" << endl;
        else if (rear == -1)
        {
            front = rear = 0;
            ptr[rear] = data;
        }
        else if (front == rear)
        {
            rear++;
            ptr[rear] = data;
        }
        else if (rear + 1 == capacity)
        {
            rear = 0;
            ptr[rear] = data;
        }
        else
        {
            rear++;
            ptr[rear] = data;
        }
    }

    void deQueue()
    {
        if (front == -1)
            cout << endl << "Underflow";
        else if (front == rear)
            rear = front = -1;
        else if (front + 1 == capacity)
            front = 0;
        else
            front++;
    }

    void frontView()
    {
        cout << endl;
        if (front < 0)
            cout << "Empty";
        else
            cout << "Front : " << ptr[front];
    }
    void rearView()
    {
        cout << endl;
        if (rear < 0)
            cout << "Empty ";
        else
            cout << "Rear : " << ptr[rear];
    }
};

int input()
{
    int data;
    cout << "Enter Data\n";
    cin >> data;
    return data;
}
int menu()
{
    int choice;
    cout << "\n1.Insert in Queue";
    cout << "\n2.Delete in Queue";
    cout << "\n3.Exit";
    cout << "\nEnter your choice\n";
    cin >> choice;
    return choice;
}
int main()
{
    QueueA q(5);
    while (1)
    {
        q.frontView();
        q.rearView();

        switch (menu())
        {
        case 1:
            q.enQueue(input());
            break;
        case 2:
            q.deQueue();
            break;
        case 3:
            exit(0);
        default:
            cout << "Invalid Choice\n";
            break;
        }
    }
}