#include <iostream>
using namespace std;
int main()
{
    int n,p=1,octal=0;
    cout<<"Enter a number to print its Decimal"<<endl;
    cin>>n;
    cout<<"The Octal of "<<n<<" is ";
    for(int i =1;n>0;i++)
    {
        octal+=(n%8)*p;
        n/=8;
        p*=10;
    }
    cout<<octal;
}
