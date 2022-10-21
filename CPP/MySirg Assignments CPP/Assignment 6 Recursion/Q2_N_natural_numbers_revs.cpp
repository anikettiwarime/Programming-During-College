#include <iostream>
using namespace std;
int n_rev(int);
int main()
{
    int n;
    cin>>n;
    n_rev(n);

}
int n_rev(int n)
{
    int r;
    cout<<n<<endl;
    if(n==1)
    return n;
    r=n_rev(n-1);
    return n;
}