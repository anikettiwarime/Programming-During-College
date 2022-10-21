#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define V 5
#define INF INT_MAX


class Graph {
    int** adj;
public:
};

int minimumCostSimplePath(int u, int destination, bool visited[], int graph[][V])
{
    if (u == destination)
        return 0;
    visited[u] = 1;
    int ans = INF;
    for (int i = 0; i < V; i++) {
        if (graph[u][i] != INF && !visited[i]) {
            int curr = minimumCostSimplePath(i, destination, visited, graph);
            if (curr < INF)
                ans = min(ans, graph[u][i] + curr);
        }
    }
    visited[u] = 0;
    return ans;
}

int main()
{

    int graph[V][V];
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            graph[i][j] = INF;

    bool visited[V] = { 0 };
    graph[0][1] = 1;
    graph[0][3] = 1;
    graph[1][2] = 2;
    graph[2][0] = 3;
    graph[3][2] = 1;
    graph[4][3] = 2;
    int s = 0, t = 2;

    cin >> s;
    cin >> t;
    visited[s] = 1;

    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++)
            if (graph[i][j] == INF)
                continue;
            else
                cout << graph[i][j] << "->";
        cout << endl;
    }
    cout << "Minimum Distance :" << minimumCostSimplePath(s, t, visited, graph);
    return 0;
}
