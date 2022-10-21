#include <iostream>
using namespace std;
int n_odd(int);
int main()
{
    int n;
    cin>>n;
    n_odd(n);
}
int n_odd(int n)
{
    int o;
    if(n==1)
    {
        cout<<n<<endl;
        return n;
    }
    o=2+n_odd(n-1);
    cout<<o<<endl;
    return o;
}