#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to print its Binary"<<endl;
    cin>>n;
    cout<<"The binary of "<<n<<" is ";
    for(int i =0;n>0;i++)
    {
        if(n%2==0)
            cout<<"0";
        else
            cout<<"1";
        n/=2;
    }
}
