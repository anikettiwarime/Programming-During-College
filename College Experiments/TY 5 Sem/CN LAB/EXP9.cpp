#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt;
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

int main() {
    int N = 6;
    cout << "Enter Number of Routers : ";
    cin >> N;
    int m;
    cout << "Enter Number of Paths : ";
    cin >> m;
    vector<node> edges;
    cout << "Enter Vertex and weights  : " << endl;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back(node(u, v, w));
    }
    int src = 0;
    int inf = 10000000;
    vector<int> dist(N, inf);
    dist[src] = 0;
    for (int i = 1;i <= N - 1;i++) {
        for (auto it : edges) {
            if (dist[it.u] + it.wt < dist[it.v]) {
                dist[it.v] = dist[it.u] + it.wt;
            }
        }
    }

    int fl = 0;
    for (auto it : edges) {
        if (dist[it.u] + it.wt < dist[it.v]) {
            cout << -1;
            fl = 1;
            break;
        }
    }

    cout << "Vertex \t Distance" << endl;
    if (!fl) {
        for (int i = 0;i < N;i++) {
            cout << i << " \t " << dist[i] << endl;
        }
    }
    return 0;
}
