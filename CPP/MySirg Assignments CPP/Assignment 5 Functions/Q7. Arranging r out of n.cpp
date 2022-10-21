#include <iostream>
using namespace std;
int arrange(int,int);
int fact(int);
int main()
{
    int n,r;
    cout<<"Enter total number of items"<<endl;
    cin>>n;
    cout<<"Enter selected number of items"<<endl;
    cin>>r;
    cout<<arrange(n,r);
}
int arrange(int n,int r)
{
  int fn,fr;
  fn=fact(n);
  fr=fact(n-r);
  return fn/fr;

}

int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
        f*=i;
    return f;
}
