//Prime number or Not
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter a number to check" << endl;
    cin >> n;
    for (i = 2;i <= n;i++)
    {
        if (n % i == 0)
            break;
    }
    if (n == i)
        cout << "Prime Number" << endl;
    else
        cout << "Not a Prime number" << endl;
}
