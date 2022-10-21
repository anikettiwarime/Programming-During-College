#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v1;
    vector<int>::iterator it = v1.begin();
    v1.push_back(10);
    v1.insert(v1.begin(), 20);
    v1.insert(v1.begin() + 1, 4, 30);
    int a = 11, b = 12, c = 13;
    v1.insert(v1.begin() + 3, a);
    v1.insert(v1.begin() + 3, b);
    v1.insert(v1.begin() + 3, c);

    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    vector <int> v2;

    v2.insert(v2.end(), v1.rbegin(), v1.rbegin() + 5);

    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    v2.erase(v2.begin() + 1);

    for (auto x : v2)
        cout << x << " ";
    cout << endl;

    v1.erase(v1.begin() + 3, v1.begin() + 6);

     for (auto x : v1)
        cout << x << " ";
    cout << endl;
}