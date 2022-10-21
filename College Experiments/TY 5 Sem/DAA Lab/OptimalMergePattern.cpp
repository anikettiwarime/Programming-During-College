#include <bits/stdc++.h>
using namespace std;

int minComputation(int size, int files[])
{
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0; i < size; i++)
        pq.push(files[i]);
    int count = 0;
    while (pq.size() > 1) {
        int first_smallest = pq.top();
        pq.pop();
        int second_smallest = pq.top();
        pq.pop();
        int temp = first_smallest + second_smallest;
        count += temp;
        pq.push(temp);
    }
    return count;
}

int main()
{
    cout << "Name : Aniket Tiwari\n";
    cout << "Roll No : 21143285\n";
    int n;
    cout << "Enter the no. of  file :  ";
    cin >> n;
    int files[50];
    cout << "Enter the files :  ";
    for (int i = 0; i < n; i++)
        cin >> files[i];
    cout << "\nMinimum Computations = " << minComputation(n, files);  	return 0;
}
