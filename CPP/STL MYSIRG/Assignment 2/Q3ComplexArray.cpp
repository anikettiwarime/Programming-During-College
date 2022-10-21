#include <iostream>
#include <array>
using namespace std;

class Complex
{
private:
    int real, imaginary;
public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    void input()
    {
        cin >> real >> imaginary;
    }
    Complex getData()
    {
        Complex temp;
        temp.real = real;
        temp.imaginary = imaginary;
        return temp;
    }

    void operator+(Complex &c)
    {
        real += c.real;
        imaginary += c.imaginary;
    }

    void setData()
    {
        
    }

    void showData()
    {
        cout << real << " + " << imaginary << "i ";
    }
};

void sum(Complex C[] , int size)
{
    Complex Temp;
    for (int i = 0;i < size;i++)
    {
        Temp.operator+(C[i]);
    }

    Temp.showData();
}

int main()
{
    array <Complex, 3> C;
    for (int i = 0;i < 3;i++)
        C.at(i).input();
    sum(&C,3);
}