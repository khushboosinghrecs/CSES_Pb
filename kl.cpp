#include <bits/stdc++.h>
using namespace std;
priority_queue<int> st;
void addedge(vector<int> vr[], int u, int v)
{
    vr[u].push_back(v);
    vr[v].push_back(u);
}
void bfs(vector<int> vr[], int s, bool btf[])
{
    int count = 0;

    queue<int> q;
    q.push(s);
    btf[s] = true;
    count++;
    while (q.empty() == false)
    {
        // int couunt = q.size();
        // while (couunt > 0)
        //{
        int u = q.front();
        // cout << u << " ";
        q.pop();
        for (int x : vr[u])
        {
            if (btf[x] == false)
            {
                count++;
                btf[x] = true;
                q.push(x);
            }
        }
        // couunt--;
        //}
        //cout << '\n';
    }
    st.push(count);
}
void bfsdin(vector<int> adj[], int v)
{
    bool btf[v + 1];
    memset(btf, 0, v + 1);
    for (int i = 0; i < v; i++)
    {
        if (btf[i] == false)
        {
            bfs(adj, i, btf);
        }
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int v, e;
    cin >> v >> e;
    vector<int> vr[v];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        addedge(vr, u, v);
    }
    bfsdin(vr, v);
    cout << st.top() << " ans";
    return 0;
}