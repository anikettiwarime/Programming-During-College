//Even number program
#include <iostream>
using namespace std;
int main()
{
    int N,i=0;
    cout<<"Enter a number"<<endl;
    cin>>N;

    do
    {
        i+=2;
        cout<<endl<<i;
    }while(i<N*2);
}
