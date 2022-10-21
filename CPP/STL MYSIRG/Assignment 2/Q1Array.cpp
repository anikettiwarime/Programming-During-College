#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 5> a{ 10,20,30,40,50 };
    for (auto it = a.begin();it != a.end();it++)
        cout << *it << " ";
    return 0;
}