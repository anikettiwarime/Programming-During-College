#include <iostream>
using namespace std;

template <class X> // Function Template X is called placeholder
void SortArray(X arr[], int size) // Array Size
{
    for (int round = 0;round < size - 1;round++)
        for (int i = 0;i < size - round - 1;i++)
            if (arr[i] > arr[i + 1])
            {
                X temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
}

int main()
{
    int a[] = { 60,30,50,40,10 };
    float b[] = { 20.5f,10.7f,12.9f,3.6f,16.3 };
    cout << "\n\nBefore Sorting Array A :";
    for (auto x : a)
        cout << x << " ";
    SortArray(a, 5);
    cout << "\nAfter Sorting Array A :";
    for (auto x : a)
        cout << x << " ";

    cout << "\n\nBefore Sorting Array B :";
    for (auto x : b)
        cout << x << " ";
    SortArray(b, 5);
    cout << "\nAfter Sorting Array B :";
    for (auto x : b)
        cout << x << " ";
}
