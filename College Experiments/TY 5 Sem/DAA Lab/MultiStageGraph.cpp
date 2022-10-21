#include<bits/stdc++.h>
using namespace std;
#define N 8
#define INF INT_MAX
int shortestDist(int graph[N][N])
{
    int dist[N];
    dist[N - 1] = 0;
    for (int i = N - 2; i >= 0; i--)
    {

        dist[i] = INF;
        for (int j = i; j < N; j++)
        {
            if (graph[i][j] == INF)
                continue;
            dist[i] = min(dist[i], graph[i][j] + dist[j]);
        }
    }
    cout << "minimum distance between from source node to target node: ";
    return dist[0];
}
int main()
{
    cout << "Name : Aniket Tiwari\n";
    cout << "Roll No : 21143285\n\n";
    int graph[N][N] =
    { {INF, 1, 5, 7, INF, INF, INF, INF},
    {INF, INF, INF, INF, 3, 13, INF, INF},
    {INF, INF, INF, INF, 7, 8, 26, INF},
    {INF, INF, INF, INF, INF, INF, 2, INF},
    {INF, INF, INF, INF, INF, INF, INF, 9},
    {INF, INF, INF, INF, INF, INF, INF, 3},
    {INF, INF, INF, INF, INF, INF, INF, 2},
    {INF, INF, INF, INF, INF, INF, INF, INF} };

    cout << shortestDist(graph);
    return 0;
}
