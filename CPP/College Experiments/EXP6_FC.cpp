#include<iostream>
using namespace std;
class B;
class A
{
private:
    int numA;
    friend class B;
public:
    A(int y = 1) :numA(y) {}
};
class B
{
private:
    int numB;
public:
    B(int x = 1) :numB(x) {}
    int add()
    {
        class A obja;
        return obja.numA + numB;
    }
};
int main()
{
    B objb(55);
    cout << "Sum : " << objb.add();
    return 0;
}
