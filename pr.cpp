#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    cout << "Hello World";
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> q[n];
    for (int i = 0; i < n; i++)
    {
        int u, v, w;
        cin >> u >> w >> v;
        q[u].push_back(make_pair(w, v));
    }
    for (int i = 0; i < n; i++)

    {
        cout << i << " " << q[i][i].first << " " << q[i][i].second << '\n';
    }
    return 0;
}