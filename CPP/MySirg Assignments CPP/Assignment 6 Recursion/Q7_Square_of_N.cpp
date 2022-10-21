#include <iostream>
using namespace std;
int N_square(int);
int main()
{
    int n;
    cin>>n;
    N_square(n);
}
int N_square(int n)
{
    int r;
    if(n==1)
    {
        cout<<n*n<<endl;
        return n;
    }

    r=1+N_square(n-1);
    cout<<r*r<<endl;
    return r;
}