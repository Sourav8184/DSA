#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

// BFS
void bfs(vector<int> adj[], int V, int startNode)
{
    vector<bool> visited(V, false);
    queue<int> q;
    q.push(startNode);
    visited[startNode] = true;

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        cout << current << " ";

        // Visit all unvisited neighbors
        for (int neighbor : adj[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

// DFS
void DFS(vector<int> adj[], int V, int node, vector<bool> &visited)
{
    visited[node] = true;
    cout << node << " ";

    // Visit all unvisited neighbors
    for (int neighbor : adj[node])
    {
        if (!visited[neighbor])
        {
            DFS(adj, V, neighbor, visited);
        }
    }
}

void dfs(vector<int> adj[], int V, int startNode)
{
    vector<bool> visited(V, false);
    DFS(adj, V, startNode, visited);
}

int main()
{
    int V = 6;
    vector<int> adj[V];
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[3].push_back(5);

    cout << "BFS starting from node 0: ";
    bfs(adj, V, 0);
    cout << endl;

    cout << "DFS starting from node 0: ";
    dfs(adj, V, 0);
    cout << endl;

    return 0;
}