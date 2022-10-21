#include <iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int a,b;
    cout<<"Enter two number to find its factor"<<endl;
    cin>>a>>b;
    cout<<hcf(a,b);
}
int hcf(int a,int b)
{
    int i,hcf;
    for(i=1;i<a*b;i++)
    {
        if(a%i==0 && b%i==0)
        hcf=i;
    }
    return hcf;
}
