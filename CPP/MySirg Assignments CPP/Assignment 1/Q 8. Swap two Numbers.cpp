#include <iostream>
using namespace std;
main()
{
    int a,b,t;
    cout<<"Enter numbers to swap \n";
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b<< endl;
    t=a;
    a=b;
    b=t;
    cout<<"Swapped values are a="<<a<<" b="<<b;
}
