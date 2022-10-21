//Positive or Negative number check
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number to check \n";
    cin>>a;
    if(a>0)
        cout<<"The number is positive";
    else if(a==0)
        cout<<"The number is Zero";
    else
        cout<<"The number is negative";
}
