#include <iostream>
using namespace std;
int n_even(int);
int main()
{
    int n;
    cin>>n;
    n_even(n);
}
int n_even(int n)
{
    int e;
    if(n==0)
    {
        return n;        
    }
    e=2+n_even(n-1);
    cout<<e<<endl;
    return e;
}