#include <iostream>
using namespace std;
int Sum_even(int);
int main()
{
    int n;
    cin>>n;
    cout<<Sum_even(n*2);
}
int Sum_even(int n)
{
    int S;
    if(n==0)
    {
        return n;
    }
    S=n+Sum_even(n-2);
    return S;
}