#include <iostream>
#include <string.h>
using namespace std;
class Operations
{
    private:
    static float pi;
    public:
    int Area(int l,int b,int h)
    {
        return l*b*h;
    }
    float Area(int r)
    {
        return pi*r*r;
    }

    int add(int a,int b)
    {
        return a+b;
    }
    float add(float a,float b)
    {
        return a+b;
    }
    string add(string a,string b)
    {
        return a+b;
    }
};
float Operations::pi=3.14;
int main()
{
    Operations O1;
    cout<<O1.Area(5,6,7)<<endl;
    cout<<O1.Area(10)<<endl;
    cout<<O1.add(5,6)<<endl;
    cout<<O1.add(6.01f,5.99f);
}