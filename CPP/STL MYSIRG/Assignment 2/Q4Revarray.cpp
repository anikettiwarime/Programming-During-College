#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<float, 5> a;
    for (int i = 0;i < a.max_size();i++)
        cin >> a[i];
    for (int X=a.max_size()-1;X>=0;X--)
        cout << a[X] << " ";
}