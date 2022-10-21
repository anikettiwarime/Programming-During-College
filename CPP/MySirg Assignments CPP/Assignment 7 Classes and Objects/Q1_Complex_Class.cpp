#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;
public:
    void setAB(int x,int y)
    {
        a=x;b=y;
    }
    int getA()
    {
        return a;
    }
        void showAB()
    {
        cout<<a<<"+"<<b<<"i";
    }
};
int main()
{
    Complex c;
    c.setAB(5,6);
    c.showAB();
}