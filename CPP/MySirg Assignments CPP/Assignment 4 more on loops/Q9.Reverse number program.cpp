#include <iostream>
using namespace std;
int main()
{
    int num,last_digit,digit;
    cout<<"Enter a number to reverse"<<endl;
    cin>>num;
    while(num>0)
    {
        last_digit=num%10;
        num/=10;
        digit+=last_digit;
        digit*=10;
    }
    digit/=10;
    cout<<digit;
}
