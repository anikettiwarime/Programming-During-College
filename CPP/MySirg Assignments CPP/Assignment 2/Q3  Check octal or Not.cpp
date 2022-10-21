// Octal No program
#include <iostream>
using namespace std;
int main()
{
    int N,D;
    cout<<"Enter number to check"<<endl;
    cin>>N;
    while(N>0)
    {
        D=N%10;
        if(D>=8)
        {
            cout<<"The given no is Not Octal Number";
            return 0;
        }
        N/=10;
    }
    cout<<"The given No is octal Number";
}
