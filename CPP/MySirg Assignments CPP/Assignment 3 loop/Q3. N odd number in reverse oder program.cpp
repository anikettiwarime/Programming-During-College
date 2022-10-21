//N odd number in reverse
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while(n>0)
    {
        cout<<n*2-1<<endl;
        n--;
    }
}
