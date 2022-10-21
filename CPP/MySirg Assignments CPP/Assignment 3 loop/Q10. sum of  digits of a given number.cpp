//Sum of digits in given number
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number to add its digit"<<endl;
    cin>>n;

    for(int i=1;n!=0;i++)
    {
        sum+=n%10;
        n/=10;
    }
    cout<<sum<<endl;

}
