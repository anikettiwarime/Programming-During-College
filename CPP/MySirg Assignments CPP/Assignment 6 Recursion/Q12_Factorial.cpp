#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}
int fact(int n)
{
    int f;
    if (n==1)
        return n;
    f=n*fact(n-1);
    return f;
}