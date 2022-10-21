#include <iostream>
using namespace std;
int lcm(int ,int);
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm(a,b);
}
int lcm(int a,int b)
{
    int i;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)
            return i;
    }
}
