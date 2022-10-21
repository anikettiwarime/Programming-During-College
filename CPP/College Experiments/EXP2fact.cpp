#include<iostream>
using namespace std;
class Fact
{
private:
    int num;
    int factorial;
public:
    // Parameterized Constructor
    Fact(int number = 0) { num = number; }
    void fact()
    {
        int f = 1;
        for (int i = 1; i <= num; i++) {
            f *= i;
        }
        factorial = f;
    }
    // Copy Constructor
    Fact(Fact& fc)
    {
        num = fc.num;
        int f = 1;
        for (int temp2 = num;temp2 > 0; temp2--)
            f *= temp2;
        cout << "Factorial of " << num << " is " << f;
    }

    void display()
    {
        cout << "Factorial of " << num << " is " << factorial << endl;;
    }
};
int main()
{
    Fact f1(5);
    f1.fact();
    f1.display();
    Fact f2(f1);
    return 0;
}
