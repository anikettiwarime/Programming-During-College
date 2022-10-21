#include <iostream>
using namespace std;
int nextprime(int);
int main()
{
    int n;
    cout<<"Enter a number to check"<<endl;
    cin>>n;
    cout<<nextprime(n);
    return 0;
}
int nextprime(int p)
{
    int i,j;
    for( i=p+1;p>0;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0)
                break;
        if(i==j)
            return i;
    }
}
