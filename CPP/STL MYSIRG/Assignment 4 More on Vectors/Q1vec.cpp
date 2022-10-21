#include <iostream> 
#include <vector>
#include <conio.h>
using namespace std;

int main()
{
    vector <vector<int>> vec;
    vector <int> a{ 10,20,30,50 }, b{ 1,2,3,4,5,6 }, c{ 11,22,33,44,55 };

    vec.push_back(a);
    vec.insert(vec.end(), { b,c });

    for (auto x : vec) {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    getch();
}