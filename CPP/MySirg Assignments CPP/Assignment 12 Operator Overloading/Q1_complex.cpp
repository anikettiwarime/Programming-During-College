#include <iostream>
using namespace std;
class Complex
{
    private:
    int real,imaginary;
    public:
    void setData(int x,int y){real=x;imaginary=y;}
    void showData(){cout<<endl<<real<<"+"<<imaginary<<"i"; }
    
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real=real+c.real;
        temp.imaginary=imaginary+c.imaginary;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.real=real-c.real;
        temp.imaginary=imaginary-c.imaginary;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real=real*c.real;
        temp.imaginary=imaginary*c.imaginary;
        return temp;
    }
    bool operator==(Complex c)
    {
        if(real==c.real && imaginary==c.imaginary)
        return true;
        else
        return false;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,6);
    c1.showData();
    c2.setData(3,4);
    c2.showData();
    c3=c1+c2;
    c3.showData();
    c3=c1.operator-(c2);
    c3.showData();
    c3=c1*c2;
    c3.showData();
}