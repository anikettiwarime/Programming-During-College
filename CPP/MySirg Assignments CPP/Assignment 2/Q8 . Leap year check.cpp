//Leap year program
#include <iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter year to check"<<endl;
    cin>>y;
    if(y%4==0)
        cout<<y<<" is leap year";
    else
        cout<<y<<" is not a leap year";
}
