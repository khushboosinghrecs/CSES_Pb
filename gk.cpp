#include <bits/stdc++.h>
using namespace std;
int arr[40][40];
bool already[40];
int ans = INT_MAX;
void solve(int j, int d, int p, int sum, int par)
{
    if (p == j)
    {
        ans = min(ans, sum);
        cout << ans << '\n';
        return;
    }

    for (int i = 0; i < d; i++)
    {
        if (already[i] == false)
        {
            int sumtemp = sum;
            already[i] = true;
            for (int k = j; k < p; k++)
            {
                sum = sum + arr[i][k];
                solve(k + 1, d, p, sum, par);
            }
            already[i] = false;
            sum = sumtemp;
        }
    }
}

int main()
{
    int d, p;
    cin >> p >> d;

    for (int i = 0; i < d; i++)
    {
        for (int j = 0; j < p; j++)
            cin >> arr[i][j];
    }

    solve(0, d, p, 0, 0);
    cout << ans << '\n';
    return 0;
}