#include<iostream>
using namespace std;
int select(int n, int r);
int fact(int);
int main()
{
    int n,r;
    cout<<"Enter total number of item n"<<endl;
    cin>>n;
    cout<<"Enter total number of item r"<<endl;
    cin>>r;
    cout<<select(n,r);
}
int select(int n, int r)
{
    int fn=fact(n),fr=fact(r),frn=fact(n-r);
    return fn/(fr*frn);
}
int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
        f*=i;
    return f;
}
