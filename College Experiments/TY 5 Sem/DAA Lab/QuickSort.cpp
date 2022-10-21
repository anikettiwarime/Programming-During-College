#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    cout << "Name: Aniket Tiwari \nRoll No : 21143285\n";
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (auto& x : arr)
        cin >> x;

    cout << "Array is : ";
    for (auto x : arr)
        cout << x << " ";

    quickSort(arr, 0, n - 1);
    cout << "\nSorted array: ";
    for (auto x : arr)
        cout << x << " ";

    return 0;
}

