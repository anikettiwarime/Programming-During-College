//count Digits of a given number
#include <iostream>
using namespace std;
int main()
{
    int n,a=1;
    cout<<"Enter a number to count its digits"<<endl;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        n/=10;
        a++;
    }
    cout<<"There are "<<a<<" digits in given number";
}
