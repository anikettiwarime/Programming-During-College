#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    cout << "Name: Aniket Tiwari \nRoll No : 21143285\n";
    int N;
    cout << "Enter the size of array : ";
    cin >> N;
    int arr[N];
    cout << "Enter array elements : ";
    for (auto& x : arr)
        cin >> x;

    int x;
    cout << "Enter element to search :";
    cin >> x;

    cout << "Given Array is : ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;
    
    int result = search(arr, N, x);
    if (result == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << result;
    return 0;
}
