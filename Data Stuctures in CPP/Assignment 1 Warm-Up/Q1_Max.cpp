#include <iostream>
using namespace std;
int maxValue(int [],int);
int main()
{
    int n;
    cout<<"Enter Size of Array"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" Values in array"<<endl;
    for(int i;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"Max is : "<<maxValue(a,n);
}
int maxValue(int a[],int size)
{
    int max=a[0];
    for (int i = 1; i < size; i++)
        if(max<a[i])
            max=a[i];
    return max;
}
float avg(int a[],int size)
{
    int sum=0;
    float avg;
    for (int i = 0; i < size; i++)
        sum+=a[i];
    avg=sum/size;
    return avg;
}
int sum(int a[],int size)
{
    int sum=0;
    for (int i = 0; i < size; i++)
        sum+=a[i];
    return sum;    
}