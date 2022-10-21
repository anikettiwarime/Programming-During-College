#include <iostream>
using namespace std;

void heapify(int arr[], int N, int i)
{
    int largest = i;

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;

    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{

    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
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


    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}
