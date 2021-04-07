#include <bits/stdc++.h>
using namespace std;
int getsum(int arr[], int qs, int qe)
{
    int sum = 0;
    for (int i = qs; i < qe; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pair<int, int> qs[q];
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        qs[i] = make_pair(a, b);
    }
    for (int i = 0; i < q; i++)
    {
        cout << getsum(arr, qs[i].first, qs[i].second) << '\n';
    }
    return 0;
}