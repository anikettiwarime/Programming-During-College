#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    int p;
    cout<<"Enter a number to check"<<endl;
    cin>>p;
    cout<<isPrime(p);
}
int isPrime(int p)
{
    int i;
    for(i=2;i<p;i++)
    {
        if(p%i==0)
        {
            break;
        }
    }
    if(p==i)
        return 1;
    else
        return 0;
}
