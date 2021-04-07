
#include <bits/stdc++.h>
using namespace std;
#define infinte INT_MAX
typedef pair<int, int> iPair;
void addedge(int u, int v, vector<pair<int, int>> adj[], int weight)
{
    adj[u].push_back({v, weight});
    adj[v].push_back({u, weight});
}
void dijkastra(vector<iPair> adj[], int node, int src)
{

    priority_queue<iPair> pq;
    int dist[node];
    for (int i = 0; i < node; i++)
    {
        dist[i] = 0;
    }
    pq.push(make_pair(0, src));
    dist[src] = 0;
    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u])
        {
            int v = x.first;
            int weight = x.second;
            if (dist[v] < dist[u] + weight)
            {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    for (int i = 1; i < node; ++i)
        cout << dist[i] << " ";
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int node;
    cin >> node;
    vector<pair<int, int>> adj[node];
    for (int i = 0; i < node - 1; i++)
    {
        int u, v, weight;
        cin >> u >> v;
        addedge(--u, --v, adj, weight = 1);
    }
    dijkastra(adj, node, 0);
}