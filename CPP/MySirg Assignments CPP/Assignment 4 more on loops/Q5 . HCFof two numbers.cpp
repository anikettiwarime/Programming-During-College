#include <iostream>//HCF program
using namespace std;
int main()
{
    int a,b,i,hcf;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    for(i=1;i<a*b;i++)
        if(a%i==0&&b%i==0)
            hcf=i;
    cout<<"The HCF of "<<a<<" & "<<b<<" is "<<hcf;
}
