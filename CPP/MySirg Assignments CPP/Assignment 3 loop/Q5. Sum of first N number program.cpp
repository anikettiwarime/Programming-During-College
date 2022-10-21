//Sum of first N natural number.
#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<"The sum of first "<<n<<" natural number is "<<sum;
}
