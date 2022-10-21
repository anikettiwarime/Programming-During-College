#include<iostream>
#include<conio.h>
using namespace std;

class ArrayADT {
private:
    int capacity;
    int lastIndex;
    int* ptr;

public:
    ArrayADT()
    {
        capacity = 0;
        lastIndex = -1;
        ptr = NULL;
    }


    ArrayADT(int cap)
    {
        capacity = cap;
        lastIndex = -1;
        ptr = NULL;
    }

    void createArray(int capacity)
    {
        this->capacity = capacity;
        this->lastIndex = -1;
        ptr = new int[capacity];

        cout << "Array created" << endl;
    }

    void push_back(int data)
    {
        if (lastIndex < capacity)
        {
            /* code */
            lastIndex++;
            ptr[lastIndex] = data;
        }
        else
        {
            cout << "cannot insert | array full" << endl;
        }
    }

    void insert(int data, int index)
    {
        cout << lastIndex << endl;

        for (int i = lastIndex; i > index; i--)
        {
            ptr[i] = ptr[i - 1];
        }

        ptr[index] = data;
    }

    void displayArray()
    {
        cout << "Displaying array : ";
        for (int i = 0; i <= lastIndex; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty()
    {
        if (lastIndex == capacity)
            return true;
        else
            return false;

        cout << endl;
    }

    void clearArray()
    {
        delete ptr;
        lastIndex = -1;
        ptr = NULL;
    }

    void accessArray()
    {
        for (int i = 5; i < capacity; i++)
        {
            cout << ptr[i] << " ";
        }
    }

    int size()
    {
        cout << "the elements in the array is: ";
        return lastIndex + 1;
    }

    void removeElement()
    {
        //removing the last element
    }
};

int main()
{
    ArrayADT a;
    a.createArray(10);
    // a.push_back(10);
    for (int i = 1; i <= 10; i++)
    {
        a.push_back(i * 10);
    }
    cout << a.isEmpty() << endl;
    a.displayArray();
    a.clearArray();
    // a.displayArray();
    // cout << a.isEmpty() <<endl;
    // a.insert(25, 2);
    a.displayArray();
    cout << a.size();
}