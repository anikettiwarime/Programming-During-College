#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1;
    l1.push_back(10);
    l1.push_front(20);

    list <int>::iterator it,it1;
    it = l1.begin();

    l1.insert(++it, 30);

    l1.insert(it, 22);
    l1.insert(--it, 44);
    l1.insert(--it, 33);

    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    it = l1.end();
    for (int i = 0; i < 2; i++)
        it--;

    *it = 25;
    for (auto x : l1)
        cout << x << " ";
    cout << endl<<"Sorted : ";

    l1.sort();
    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    cout << l1.front() << endl;

    l1.pop_front();
    l1.pop_back();

    for (it = l1.begin();it != l1.end();it++)
        cout << *it << " ";
    cout << endl;

    it = l1.begin();

    it1 = l1.end();
    l1.erase(++it, --it1);


    for (auto x : l1)
        cout << x << " ";
    cout << endl;

    return 0;
}