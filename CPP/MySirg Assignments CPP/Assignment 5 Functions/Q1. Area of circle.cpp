#include <iostream>
using namespace std;
float area(int R)
{
    return 3.14*R*R;
}

int main()
{
    cout<<"Enter radius of circle"<<endl;
    int r;
    cin>>r;
    cout<<"Area of circle : "<<area(r);
    return 0;
}
