#include <iostream>
#include <vector>
using namespace std;
/* Directed and Weighted Graph */
int main()
{
    int vertex, edges;
    cout << "Enter how many vertex and edges: " << endl;
    cin >> vertex >> edges;

    vector<pair<int, int> > adjList[vertex];
    cout << "Enter all the edges" << endl;
    for (int i = 0; i < edges; i++)
    {
        int source, destination, weight;
        cin >> source >> destination >> weight;
        adjList[source].push_back(make_pair(destination, weight));
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adjList[i].size(); j++)
        {
            cout << "[ " << adjList[i][j].first << ",  " << adjList[i][j].second << " ]" << ", ";
        }
        cout << endl;
    }

    return 0;
}