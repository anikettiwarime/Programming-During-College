#include <iostream>
#include<array>
using namespace std;

int main()
{
    array <int, 10> a{ 5, 10,15,20,25,30,35,40,45,50 };
    for (auto it = a.begin();it != a.end();it++)
        if(*it%2==0)
        cout << *it << " ";
    return 0;
}