#include <bits/stdc++.h>
using namespace std;
const int r = 2e5;
priority_queue<int> arr[r];
void dfs(vector<int> vrr[], bool visited[], int s)
{
    visited[s] = true;
    int dfsc = 0;
    for (auto u : vrr[s])
    {
        if (visited[u] == false)
        {
            dfsc++;
            dfs(vrr, visited, u);
            cout << s << " " << u << '\n';
            arr[s].push(arr[u].top() + 1);
        }
    }

    if (dfsc == 0)
    {
        arr[s].push(0);
    }
    if (dfsc == 1)
    {
        arr[s].push(0);
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

    for (int i = 0; i < n; i++)
    {
        bool visited[n] = {false};
        dfs(vrr, visited, i);
        int temp = arr[i].top();
        arr[i].pop();
        temp = temp + arr[i].top();
        cout << temp << " ";
    }

    // cout << ans << '\n';
    return 0;
}