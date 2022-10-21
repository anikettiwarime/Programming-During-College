#include <iostream>
using namespace std;
int DtoB(int);
int main()
{
    int n;
    cin>>n;
    DtoB(n);
}
int DtoB(int n)
{
    cout<<n%2;
    if(n==1)
        return n;
    DtoB(n/2);
        return 0;
}