#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int Possibility(int N, int M, vector<ll> A) {
    // Write your code here
    ll arr[N - 2][N - 2];
    int ans = 0;
    for (int i = 0; i < N - 2; i++)
    {
        int added = A[i] + A[i + 1] + A[i + 2];
        for (int j = 0, k = 0; j < N - 2; j++) {
            if (j > i && j <= i + 2)
                continue;
            arr[i][k] = A[j];
            k++;
        }
        arr[i][i] = added;
    }
    //Function For Checking
    for (int i = 0; i < M; i++)
    {
        int max = arr[i][0];
        for (int j = 0; j < N - 2; j++)
        {
            if (max > arr[i][j])
            {
                ans = 1;
                break;
            }
            if (ans == 1)
                break;
        }
    }
    return ans;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        int M;
        cin >> M;
        vector<long long> A(N);

        // Taking array input
        for (int i = 0; i < N; i++)
            cin >> A[i];
        int ans;
        ans = Possibility(N, M, A);
        cout << ans;
        cout << "\n";
    }
}