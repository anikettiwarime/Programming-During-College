#include<iostream>
#include<math.h>
using namespace std;
class Box
{
private:
    double length;
    double area;
public:
    void Inputarea()
    {
        cout << "Enter the area of box\n";
        cin >> area;
    }

    void displaylength()
    {
        cout << "Length of box is : " << length;
    }
    friend Box calculatelength(Box b);
};

Box calculatelength(Box b)
{
    b.length = sqrt(b.area);
    return b;
}

int main()
{
    Box b;
    b.Inputarea();
    b = calculatelength(b);
    b.displaylength();
    return 0;
}
