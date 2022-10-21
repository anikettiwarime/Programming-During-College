#include <iostream>
using namespace std;

template <class X>
void displayAny(X arr,int size)
{
    cout << "\nArray is : ";
    for (int i = 0;i < size;i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    float arr[] = { 10.0,10.2,10.3,10.4,10.5 };
    displayAny(arr, (sizeof(arr) / sizeof(float)));
    float arr2[] = { 10,20,30,40,50,100,60,70,80 };
    displayAny(arr2, (sizeof(arr2) / sizeof(int)));

}