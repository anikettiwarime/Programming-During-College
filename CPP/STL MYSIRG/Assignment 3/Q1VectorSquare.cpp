#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v{ 1,2,4,9,12 };
    for (auto x : v)
        cout << x * x << " ";
}