#include<iostream>
using namespace std;
class Div
{
    int a, b, div;
public:
    void geta()
    {
        cout << "---------------------------------------------------------";
        cout << "\nEnter Number : ";
        cin >> a;
    }
    int& operator [](int d)//declaration 
    {
        if (a >= d)
        {
            div = a / d;
            return div;
        }
        else
        {
            throw(d);
        }
    }
    void display(int d)
    {
        div = d;
        cout << "\n Divison (a/b) :=" << div;
    }
};

int main()
{
    Div d1;
    try
    {
        d1.geta();
        int ch, division;
        cout << "\nEnter value to divide : ";
        cin >> ch;
        division = d1[ch];
        d1.display(division);       
    }
    catch (int a)
    {
        cout << "Exception thrown\nDivisor " << a << " is less than dividend";
    }
    return 0;
}
