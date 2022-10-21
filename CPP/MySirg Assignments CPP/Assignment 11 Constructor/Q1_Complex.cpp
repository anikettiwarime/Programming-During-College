#include <iostream>
using namespace std;
class Complex
{
    private:
    int real,imaginary;
    public:
    void setData(int realpart,int imaginarypart)
    {
        real=realpart;
        imaginary=imaginarypart;
    }
    void showData()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
    Complex(int realpart,int imaginarypart)
    {
        real=realpart;
        imaginary=imaginarypart;
    }

    Complex()
    {
        real=0;
        imaginary=0;
    }
};
int main()
{
    Complex c1(5,6);
    Complex c2;
    c1.showData();
    c2.showData();
    c2.setData(9,8);
    c2.showData();
}