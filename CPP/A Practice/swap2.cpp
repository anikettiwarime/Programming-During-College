#include <bits/stdc++.h>
using namespace std;
// Classes and Functions Here

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

void solve()
{
    //Solve here
    int n, th, tm;
    cin >> n >> th >> tm;

    int st = (th * 60) + tm;

    int ans[n];

    pair<int, int> p;

    for (int i = 0;i < n;i++)
    {
        cin >> p.first;
        cin >> p.second;
        ans[i] = (p.first * 60) + p.second;
    }

    int  minsleep = getMin(ans, n);

    cout << minsleep << " " << st << "  " << endl;

    if (st > 720)
    {
        st -= 720;
        minsleep += 720;
    }

    cout << minsleep << " " << st << "  " << endl;

    int ans2;

    ans2 = abs(minsleep - st);

    // cout << ans2<<"      ";
    p.first = ans2 / 60;
    p.second = ans2 % 60;

    cout << p.first << " " << p.second << endl;
}



int main()
{
    int t;
    cin >> t;


    while (t--)
    {
        solve();
    }
    return 0;
}