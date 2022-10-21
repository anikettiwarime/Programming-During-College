#include <iostream>
using namespace std;
int n_Even_rev(int);
int main()
{
    int n;
    cin>>n;
    n_Even_rev(n);
}
int n_Even_rev(int n)
{
    int r;
    if(n==0)
    {
        return n;
    }
    r=n*2;
    cout<<endl<<r;
    n_Even_rev(n-1);
    return r;
}