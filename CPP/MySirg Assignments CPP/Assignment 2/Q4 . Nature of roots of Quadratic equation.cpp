//Nature of roots of Quadratic equation
#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    cout<<"Enter A,B,C";
    cin>>a>>b>>c;
    d=b*b - 4*a*c;

    if(d>0)
    cout<<"There is 2 real and distinct root";

    else if(d=0)
    cout<<"2 real and equal roots";

    else
    cout<<"No real roots";
}
