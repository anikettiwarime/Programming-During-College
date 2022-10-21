//comparing 2 number
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two number to compare"<<endl;
    cin>>a>>b;

    if (a>b)
        cout<<a<<" is greater than "<<b;
    else if (a==b)
        cout<<a<<" and  "<<b<<" are equal";
    else
        cout<<a<<" is less than "<<b;
}
