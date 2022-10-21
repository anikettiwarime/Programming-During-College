#include <iostream>
using namespace std;
int minValue(int [],int);
int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<"\nMin value is : "<<minValue(a,n);        
}

int minValue(int a[],int size)
{
    int min=a[0];
    for (int i = 1; i < size; i++)
        if (min>a[i])
            min=a[i];
    return min;            
}