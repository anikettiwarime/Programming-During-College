#include <iostream>
using namespace std;
int Sum_of_Squares(int);
int main()
{
    int n;
    cin>>n;
    cout<<Sum_of_Squares(n);
}
int Sum_of_Squares(int n)
{
    int S=0;
    if(n==1)
    {
        return n*n;
    }
    S=n*n+Sum_of_Squares(n-1);
    return S;
}