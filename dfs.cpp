#include <bits/stdc++.h>
using namespace std;
const int m = 2e5;
int srr[m];

void dfs(vector<int> adj[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << "    ";
        for (auto u : adj[i])
        {
            cout << u << " ";
        }
        cout << '\n';
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> v[n];
    int x, y;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        --x;
        --y;
        v[x].push_back(y);
    }
    dfs(v, n);

    return 0;
}