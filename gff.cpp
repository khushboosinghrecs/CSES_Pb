#include <bits/stdc++.h>
using namespace std;
const int r = 2e5;
arr[r];
int ans = 0;
int dfs(vector<int> vrr[], bool visited[], int s)
{
    //visited[s] = true;
    int res = 0;
    int c = 0;
    for (auto u : vrr[s])
    {
        if(u==s) continue;
        //if (visited[u] == false)
        {
            c++;
            res = max(res, dfs(vrr, visited, u));
            arr[s]=res;
        }
    }
    if (c == 0)
    {
        return 0;
    }
    else
    {
        return res + 1;
    }
}

int main()
{
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    int n;
    cin >> n;

    vector<int> vrr[n];
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        --x, --y;
        vrr[x].push_back(y);
        vrr[y].push_back(x);
    }
    bool visited[n];

    for (int i = 0; i < n; i++)
    {
        ans = 0;
        memset(visited, false, n);
        cout << dfs(vrr, visited, i) << " ";
    }
    return 0;
}