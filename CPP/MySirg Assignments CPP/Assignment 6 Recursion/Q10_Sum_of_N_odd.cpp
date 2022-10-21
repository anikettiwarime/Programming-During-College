#include <iostream>
using namespace std;
int Sum_of_odd(int);
int main()
{
    int n;
    cin>>n;
    cout<<Sum_of_odd(n*2-1);
}
int Sum_of_odd(int n)
{
    int S;
    if(n==1)
    {
        return n;
    }
    S=n+Sum_of_odd(n-2);
    return S;
}