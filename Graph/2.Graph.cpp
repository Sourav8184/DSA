#include <iostream>
#include <vector>
using namespace std;
/* Undirected and Weighted Graph */
int main()
{
    int vertex, edges;
    cout << "Enter how many vertex and edges: " << endl;
    cin >> vertex >> edges;
    int u, v, weight;
    vector<vector<int> > adjMatrix(vertex, vector<int>(vertex, 0));
    cout << "Enter all the edges: " << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        adjMatrix[u][v] = weight;
        adjMatrix[v][u] = weight;
    }

    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << adjMatrix[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}