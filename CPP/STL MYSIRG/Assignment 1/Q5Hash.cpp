#include <iostream>
using namespace std;

template <typename X, typename Y>
class Hash
{
private:
    X First;
    Y Second;
public:
    void insert(X a, Y b)
    {
        First = a;
        Second = b;
    }

    X getFirst()
    {
        return First;
    }
    Y getSecond()
    {
        return Second;
    }
};


int main()
{
    Hash <int, string> H1;
    H1.insert(1, "Aniket");
    cout << H1.getFirst() << " " << H1.getSecond();
}
