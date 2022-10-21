#include <iostream>
#include <vector>
#include <utility>//Pair
using namespace std;
// Classes and Functions Here

int main()
{
    // Write Your code Here
    // VECTORS

    vector<int> v1(5, 5);
    for (auto x : v1)
        cout << x << " ";
    cout << endl;

    vector <int> v2;

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);
    v2.push_back(40);
    v2.push_back(50);

    for (auto x : v2)
        cout << x << " ";

    v2.swap(v1);
    for (auto x : v2)
        cout << endl << x;

    vector<int> v3{ 100,200,300 };

    for (int i = 0; i < v3.size(); i++)
        cout << endl << v3.at(i);
    cout << endl;
    v3.pop_back();

    for (auto x : v3)
        cout << x << " ";

    v1.erase(v1.begin() + 2, v1.end());

    for (auto it = v1.rbegin();it!=v1.rend();it++)
        cout << *it << " ";


    // PAIRS

    // pair<int, string> pair1(1, "A");
    // pair<int, string> pair2;
    // pair2.first = 'a';
    // pair2.second = "";
    // pair<int, string> pair3;    
    // pair3 = make_pair(1, "A");
    // cout << pair2.first<<" "<<pair2.second;

    return 0;
}