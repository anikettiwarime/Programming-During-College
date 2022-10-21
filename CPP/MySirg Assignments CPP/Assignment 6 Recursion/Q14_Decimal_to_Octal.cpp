#include <iostream>
using namespace std;
int DtoO(int);
int main()
{
    int n;
    cin>>n;
    DtoO(n);
}
int DtoO(int n)
{
    if(n>0)
        DtoO(n/8);
    cout<<n%8;       
    return 0;
}