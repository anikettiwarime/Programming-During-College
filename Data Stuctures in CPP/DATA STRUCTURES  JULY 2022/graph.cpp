#include <iostream>
#include <vector>
using namespace std;


void addEdge(int** g, int size) {

    cout << "Enter No of edges you want to insert" << endl;
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        cout << "Enter vertex no respectively ";
        int a, b;
        cin >> a >> b;
        g[a][b] = 1;
        g[b][a] = 1;
    }

}




int main()
{
    //Write Your code Here
    int** Graph = new int* [5];


    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++)
            cout << Graph[i][j] << "1 ";
        cout << "\n";
    }

    addEdge(Graph, 5);


    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++)
            cout << Graph[i][j] << " ";
        cout << "\n";
    }



    return 0;
}