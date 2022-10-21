#include <iostream>
using namespace std;
int main()
{
    int N,M,a,digit=0;
    cout<<"Enter a number to find its largest digit"<<endl;
    cin>>N;
    M=N;
    for(int i=1;N!=0;i++)
    {
        a=N%10;
        if(digit<a)
            digit=a;
        N/=10;
    }
    cout<<"The highest digit value in the number "<<M<<" is "<<digit;
}
