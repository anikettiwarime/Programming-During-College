#include <iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"Enter a number to print its factorial"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<fact(n);
}
int fact(int f)
{
    int a=1;
    for(int i=f;i>0;i--)
    {
        a=a*i;
    }
    return a;
}
