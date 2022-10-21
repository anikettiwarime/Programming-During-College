#include <iostream>
using namespace std;
main()
{
    int p,r,t;
    float SI;
    cout<<"Enter principle, rate of interest and time"<<endl;
    cin>>p;
    cin>>r;
    cin>>t;
    SI=(p*r*t)/100;
    cout<<"Simple interest is  Rs "<<SI;
}
