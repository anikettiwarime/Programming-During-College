#include <bits/stdc++.h>
using namespace std;
// Classes and Functions Here

int solve(int m, vector<int> price, vector<int> nutrition, int k)
{
    int n = price.size();
    vector<pair<int, int>> v, vp;
    for (int i = 0;i < n;i++) {
        pair<int, int> p;
        p.first = price[i];
        p.second = nutrition[i];
        v.push_back(p);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x.first << " " << x.second << endl;

    for (int i = n - 1;i <= 0;i--) {
        
    }

    return 0;
}



int main()
{
    int n, m;
    cin >> m >> n;
    vector<int> p, nv;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        // cout << x << " ";
        p.push_back(x);
    }

    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        nv.push_back(x);
    }

    int k;
    cin >> k;
    cout << solve(m, p, nv, k);
    return 0;
}