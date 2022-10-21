#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imaginary;

    public:
    void setData(int a,int b)
    {
        real=a;
        imaginary=b;
    }
    void showData()
    {
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }

    Complex add(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }

    Complex subtract(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imaginary=imaginary-c.imaginary;
        return temp;
    }

    Complex multiply(Complex c)
    {
        Complex temp;
        temp.real=real*c.real;
        temp.imaginary=imaginary*c.imaginary;
        return temp;
    }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(5,6);
    c1.showData();
    c2.setData(4,3);
    c2.showData();
    c3=c1.add(c2);
    c3.showData();
}