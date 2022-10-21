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
        cout<<endl<<real<<" "<<imaginary<<"i";
    }
    void operator-()
    {
        real=-real;
        imaginary=-imaginary;
    }
    Complex operator++()
    {
        Complex temp;
        temp.real=++real;
        temp.imaginary=++imaginary;
        return temp;
    }
    Complex operator++(int)
    {
        Complex temp;
        temp.real=real++;
        temp.imaginary=imaginary++;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(5,6);
   /* c1.showData();
    -c1;
    c1.showData();
    -c1;
    c1.showData();*/
    c2.setData(3,4);
    c2.showData();
    c3=++c2;
    c3.showData();
    c2.showData();
    c3=c2++;
    c3.showData();
    c2.showData();
}