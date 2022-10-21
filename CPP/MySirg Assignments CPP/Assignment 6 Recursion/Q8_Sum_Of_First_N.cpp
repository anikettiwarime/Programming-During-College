#include <iostream>
using namespace std;
int NSum(int);
int main()
{
    int n;
    cin>>n;
    cout<<NSum(n);
}
int NSum(int n)
{
    int S=0;
    if(n==1)
    {
        return n;
    }    
    S=n+NSum(n-1);
    return S;
}