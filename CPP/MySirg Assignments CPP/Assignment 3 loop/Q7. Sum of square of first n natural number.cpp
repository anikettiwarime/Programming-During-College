//Sum of square of first N natural number.
#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter a number to print its square"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
        sum+=i*i;
    cout<<"Sum of square of first "<<n<<" natural number is "<<sum;
}
