#include <iostream>
using namespace std;
// Method 1
int countBits(int n) {
    int ans = 0;
    while (n > 0) {
        ans += (n & 1);
        n = n >> 1;
    }
    return ans;
}

int countBitsFast(int n) {
    int ans = 0;
    while (n > 0) {
        n = n & (n - 1);
        ans++;
    }
    return ans;
}


int main()
{
    cout << countBitsFast(5);
    return 0;
}