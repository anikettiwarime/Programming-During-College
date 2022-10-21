#include <iostream>
using namespace std;

template <class X>
X Greater(X a, X b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Greater No is " << Greater(5.6f, 5.7f);
    cout << "\nGreater No is " << Greater(100, 20);
    cout << "\nGreater No is " << Greater(100.1100, 100.20085);
}