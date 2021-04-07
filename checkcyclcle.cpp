#include <bits/stdc++.h>
using namespace std;
#define infinte INT_MAX
void addedge(int u, int v, vector<pair<int, int>>adj[], int weight)
{
    adj[u].push_back({weight, v});
}
void dfsrec(vector<pair<int, int>> adj[], int s, bool visited[], stack<int> &stk)
{
    visited[s] = true;
    for (int u : adj[s])
    {
        if (visited[u] == false)
            dfsrec(adj, u, visited, stk);
    }
    stk.push(s);
}
void dfs(vector<pair<int, int>> adj[], int node)
{
    stack<int> stk;
    bool visited[node];
    for (int i = 0; i < node; i++)
        visited[i] = false;
    for (int i = 0; i < node; i++)
    {
        if (visited[i] == false)
        {
            (dfsrec(adj, i, visited, stk));
        }
    }
    int dist[node];
    for(int i=0; i<node; i++)
    dist[i]=infinte;


    while (stk.empty() == false)
    {
        cout << stk.top() << " ";
        stk.pop();
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int edge, node;
    cin >> edge >> node;
    vector<pair<int, int>> adj[node];
    for (int i = 0; i < edge; i++)
    {
        int u, v, weight;
        cin >> u >> v>>weight;
        addedge(u, v, adj, weight);
    }
    dfs(adj, node);
}