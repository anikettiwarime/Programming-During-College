#include <iostream>
using namespace std;
int isEven(int);
int main()
{
    int n;
    cout<<"Enter a number to check"<<endl;
    cin>>n;
    cout<<isEven(n);
}
int isEven(int check)
{
    if(check%2==0)
        return 1;
    else
        return 0;

}
