#include <iostream>
#include<vector>
using namespace std;

class DynamicArray
{
private:
    int capacity;
    int lastindex;
    int *ptr;
public:
    DynamicArray()
    {
        ptr = NULL;
        lastindex = -1;
    }
    DynamicArray(int cap)
    {
        ptr = NULL;
        lastindex = -1;
        capacity = cap;
    }

    void createArray(int cap)
    {
        capacity = cap;
        ptr = new int[cap];
    }

    void append(int data)
    {
        if (capacity == lastindex + 1)
            cout << "Overflow";
        else
        {
            lastindex++;
            ptr[lastindex] = data;
        }
    }

    void deleteValue(int value)
    {
        int i = 0;
        if (lastindex == -1)
        {
            cout << "Underflow";
            return;
        }
        while (value != ptr[i])
        {
            i++;
        }
        for (int j = i;j < lastindex;i++)
            ptr[i] = ptr[i + 1];
        lastindex--;
    }
    void display()
    {
        int i = 0;
        while (lastindex != i-1)
        {
            cout << ptr[i] << " ";
            i++;
        }
    }
};

class heap
{
private:
    vector <int> memory;
};

int main()
{
    int i;
    vector <int> a;
    a.push_back(5);
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    a.push_back(9);
    a.push_back(10);
    for ( i = 0 ;i != a.size();i++)
        cout << a.at(i) << " " << i << endl;
    cout << a.at(i - 2);
    return 0;
}