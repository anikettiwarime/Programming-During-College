#include <iostream>
using namespace std;
void fib(int);
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fib(n);
}
void fib(int n)
{
    int first=0,second=1,next;
    for(int i=0;i<n;i++)
    {
        cout<<first<<endl;
        next=second+first;
        first=second;
        second=next;
    }
}