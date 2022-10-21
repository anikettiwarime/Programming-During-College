#include <iostream>
using namespace std;
int n_odd_rev(int);
int main()
{
    int n;
    cin>>n;
    n_odd_rev(n);
}
int n_odd_rev(int n)
{
    int r;
    if(n==1)
    {
        cout<<n;
        return n;
    }
    r=n*2-1;
    cout<<r<<endl;
    n_odd_rev(n-1);
    return r;
}