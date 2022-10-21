#include <iostream>
using namespace std;
int n_nat(int );
int main()
{
    int n;
    cin>>n;
    n_nat(n);   
}
int n_nat(int n)
{
    int r;
    if (n==0)
    {
        return n;
    }
    r=1+n_nat(n-1);
    cout<<r<<endl;
    return r;
}