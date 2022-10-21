#include <iostream>
using namespace std;

class Prime{
private:
    int num;
public:
    Prime(int number) {
        num = number;
        primenum();
    }
    void primenum()
    {
        int i;
        for (i = 2;i <= num;i++)
            if (num % i == 0)
                break;
        if (num == i)
            cout << num << " is prime Number" << endl;
        else
            cout << num << " is not a Prime number" << endl;
    }
};
int main()
{
    Prime(4);
    Prime(5);
    return 0;
}