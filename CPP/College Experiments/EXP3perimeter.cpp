#include <iostream>
using namespace std;
class Area
{
protected:
    int area;
public:
    void showarea()
    {
        cout << "\nArea:" << area;
    }
};
class Perimeter
{
protected:
    int per;
public:
    void showperimeter()
    {
        cout << "\nPerimeter:" << per;
    }
};

class rectangle :public Area, public Perimeter
{
protected:
    int l, b;
public:
    void getdata()
    {
        cout << "Enter length of Rectangle :";
        cin >> l;
        cout << "Enter breadth of Rectangle :";
        cin >> b;
    }
    void calculate()
    {
        area = l * b;
        per = 2 * (l + b);
    }
    void display()
    {
        cout << "\nLength of rectangle : " << l;
        cout << "\nBreadth of rectangle : " << b;
        showarea();
        showperimeter();
    }
};
int main()
{
    rectangle r1;
    r1.getdata();
    r1.calculate();
    r1.display();
}
