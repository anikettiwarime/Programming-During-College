#include <iostream>
using namespace std;
int* DynamicArray(int arr1[],int size1,int arr2[],int size2)
{
    int totalsize=size1+size2;
    int *p=new int[totalsize];
    for (int i = 0; i < size1; i++)
        *(p+i)=arr1[i];
    int j=0;
    for (int i = size1; i < totalsize; i++)
        {
            *(p+i)=arr2[j];
            j++;
        }
    return p;
}
int main()
{
    int a,b;
    cout<<"Enter size of array 1"<<endl;
    cin>>a;
    int arr1[a];
    for (int i = 0; i < a; i++)
        cin>>arr1[i];

    cout<<"Enter size of array 2"<<endl;
    cin>>b;
    int arr2[b];
    for (int i = 0; i < b; i++)
        cin>>arr2[i];

    cout<<"\nArray 1: ";
    for (int i = 0; i < a; i++)
        cout<<arr1[i]<<" ";
    cout<<"\nArray 2: ";
    for (int i = 0; i < b; i++)
        cout<<arr2[i]<<" ";
    cout<<"\nDynamically Created Array :";
    int *ptr=DynamicArray(arr1,a,arr2,b);
    for (int i = 0; i < a+b; i++)
        cout<<" "<<*(ptr+i);
}

