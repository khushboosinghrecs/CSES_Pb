#include <bits/stdc++.h>
using namespace std;
int v;
int main()
{
    int e;
    cin >> v >> e;
    vector<int> adj[1000];
    for (int i = 0; i < e; i++)
    {
        int src, des, wt;
        cin >> src >> des >> wt;
        adj[i].push_back(src);
        adj[i].push_back(des);
        adj[i].push_back(wt);
        }
    int dis[v];
    for (int i = 0; i < v; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        int j = 0;
        while (adj[j].size() != 0)
        {

            if (dis[adj[j][0]] + adj[j][2] < dis[adj[j][1]])
            {
                dis[adj[j][1]] = dis[adj[j][0]] + adj[j][2];
            }
            j++;
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
    return 0;
}