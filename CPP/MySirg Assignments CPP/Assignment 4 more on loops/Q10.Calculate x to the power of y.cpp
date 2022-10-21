#include <iostream>
using namespace std;
int main()
{
    int x,y,a;
    cout<<"Enter x and y"<<endl;
    cin>>x>>y;
    a=x;
    for(int i=1;i<y;i++)
    {
        a*=x;
    }
    cout<<a;
}
