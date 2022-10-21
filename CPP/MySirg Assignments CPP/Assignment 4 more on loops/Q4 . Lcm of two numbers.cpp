#include <iostream>
using namespace std;
int main()
{
    int a,b,lcm;
    cout<<"Enter number to find their lcm"<<endl;
    cin>>a>>b;
    for(lcm=1;lcm<=a*b;lcm++)
        if(lcm%a==0&&lcm%b==0)
            break;
    cout<<endl<<"LCM of "<<a<<" & "<<b<<" is "<<lcm;
}
