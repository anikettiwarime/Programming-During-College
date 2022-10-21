#include<iostream>
using namespace std;
template <class X>
class Array
{
private:
    int capacity;
    int lastindex;
    X* ptr;
public:
    // Constructor
    Array(int cap)
    {
        capacity = cap;
        ptr = new X[capacity];
        lastindex = -1;
    }
    // To Insert Element in array after last position 
    void append(X data)
    {
        if (lastindex + 1 >= capacity)
            cout << "\nArray Overflow";
        else
        {
            lastindex++;
            ptr[lastindex] = data;
        }
    }

    // Array To get element at i'th position
    X getItem(int index)
    {
        if (index<0 || index>capacity - 1)
            cout << "\nInvalid Index";
        else
            return ptr[index];
        return X(0);
    }

    // To Count total no of elements
    int counElement()
    {
        return lastindex + 1;
    }

    //To search an element
    int search(X item)
    {
        for (int i;i < lastindex + 1;i++)
            if (ptr[i] == item)
                return i;
        return -1;
    }
    //To delete an item
    void DeleteItem(X val)
    {
        int a = search(val);
        if (a == (-1))
            cout << "\nItem not Present";
        else
        {
            lastindex--;
            X* temp = new X[capacity];
            for (int i = 0, j = 0;i <= lastindex+1;i++)
            {
                if (i == a)
                    continue;
                temp[j] = ptr[i];
                j++;
            }
            delete []ptr;
            ptr = temp;
        }
    }
    
    // Show all element of array
    void Display()
    {
        if (lastindex < 0)
            cout << "\nEmpty Array";
        cout << "\n";
        for (int i = 0;i <= lastindex;i++)
            cout << ptr[i] << " ";
    }
};

int main()
{
    Array<string> a(5);
    a.append("Aniket");
    a.append("Prathamesh");
    a.append("Vedhas");
    a.append("Nishant");
    a.append("Akshay");
    a.Display();
    a.append("Bhushan");
    a.Display();
    cout << "\n" << a.getItem(4);
    a.DeleteItem("Bhushan");
    cout<<a.search("Bikas");
    a.Display();
    return 0;
}