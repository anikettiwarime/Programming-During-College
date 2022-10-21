#include <iostream>
using namespace std;
int prime_nums(int);
int main()
{
    int a,b,i;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter last number"<<endl;
    cin>>b;
    for(i=a;i<b;i++)
    {
        i=prime_nums(i);
        if(i>b)
            break;
        cout<<endl<<i;
    }
}
int prime_nums(int p)
{
    int i,j;
    for( i=p;p>0;i++)
    {
        for(j=2;j<i;j++)
            if(i%j==0)
                break;
        if(i==j)
            return i;
    }
    return p;
}
