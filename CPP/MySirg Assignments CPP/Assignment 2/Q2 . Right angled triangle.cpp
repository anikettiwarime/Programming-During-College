#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter all sides of triangle"<<endl;
    cin>>a>>b>>c;
    if(a*a+b*b==c*c)
        cout<<"The given triangle is right angled triangle";
    else
        cout<<"The given triangle is not a right angled triangle";
    return 0;
}
