#include <bits/stdc++.h>
using namespace std;
#define V 4
int travllingSalesmanProblem(int graph[][V], int s)
{
    vector<int> vertex; for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
    int min_path = INT_MAX;
    do {
        int current_pathweight = 0; int k = s;
        for (int i = 0; i < vertex.size(); i++) {
            current_pathweight += graph[k][vertex[i]];
            k = vertex[i];
        }
        current_pathweight += graph[k][s];
        min_path = min(min_path, current_pathweight);
    } while (next_permutation(vertex.begin(), vertex.end()));
    return min_path;
}

int main()

{
    cout << "Name : Aniket Tiwari\n";
    cout << "Roll No : 21143285\n\n";
    int graph[][V] = { { 0, 8, 10, 20 },
                        { 10, 0, 25, 25 },
                        { 15, 35, 0, 30 },
                        { 20, 25, 30, 0 } };

    int s = 0;
    cout << travllingSalesmanProblem(graph, s) << endl; return 0;
}
