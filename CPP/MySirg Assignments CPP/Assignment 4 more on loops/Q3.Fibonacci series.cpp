//Print fibonacci
#include <iostream>
using namespace std;
int main()
{
    int first=0,second=1,next=0,i,N;
    cout<<"Enter number of terms you want to print"<<endl;
    cin>>N;
    for(i=0;i<=N;i++)
    {
        next=first+second;
        first=second;
        second=next;
        cout<<first<<endl;
    }
}
