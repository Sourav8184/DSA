#include <iostream>
#include <vector>
using namespace std;
/* Directed and Unweighted Graph */
int main()
{
    int vertex, edges;
    cout << "Enter how many vertex and edges: " << endl;
    cin >> vertex >> edges;

    vector<int> adjList[vertex];
    cout << "Enter all the edges" << endl;
    for (int i = 0; i < edges; i++)
    {
        int source, destination;
        cin >> source >> destination;
        adjList[source].push_back(destination);
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}