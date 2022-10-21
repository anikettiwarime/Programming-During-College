#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check divisibility by 7"<<endl;
    cin>>a;
    if(a/7)
        cout<<a<<" is divisible by 7";
    else
        cout<<a<<" is not divisible by 7";
    return 0;
}
