//Factorial of N number
#include <iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter number to find its factorial"<<endl;
    cin>>n;
    for(int i=1;n>1;n--)
    {
        f=f*n;
    }

    cout<<f<<endl;
}
