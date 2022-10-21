#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main(void)
{
    cout << "Name: Aniket Tiwari \nRoll No : 21143285\n";
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements : ";
    for (auto& x : arr)
        cin >> x;

    cout << "Given Array is : ";
    for (auto x : arr)
        cout << x << " ";
    cout << endl;

    int x;
    cout << "Enter element to search :";
    cin >> x;

    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
    return 0;
}
