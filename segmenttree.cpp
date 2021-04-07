#include <iostream>
using namespace std;
#define min(a, b) a < b ? a : b
void buildtree(int *arr, int *tree, int s, int e, int ti)
{
    if (s == e)
    {
        tree[ti] = arr[s];
        return;
    }
    int mid = (s + e) / 2;
    buildtree(arr, tree, s, mid, (2 * ti) + 1);
    buildtree(arr, tree, mid + 1, e, (2 * ti) + 2);
    tree[ti] = min(tree[(2 * ti) + 1], tree[(2 * ti) + 2]);
}
int getsum(int *tree, int s, int e, int qs, int qe, int ti)
{
    if (qs > e || qe < s)
        return 1e9;
    if (qs <= s && qe >= e)
        return tree[ti];
    else
    {
        int mid = (s + e) / 2;
        return min(getsum(tree, s, mid, qs, qe, (2 * ti) + 1),
                   getsum(tree, mid + 1, e, qs, qe, (2 * ti) + 2));
    }
}
void update_index(int *tree, int s, int e, int ti, int qs, int qe, int diff)
{
    if (qs > qe || qe < s || s > e)
        return;
    if (s == e)
    {
        tree[ti] += diff;
    }
    else
    {
        int mid = (s + e) / 2;
        getsum(tree, s, mid, qs, qe, (ti * 2) + 1);
        getsum(tree, mid + 1, e, qs, qe, (2 * ti) + 2);
    }
    tree[ti] = tree[(ti * 2) + 1] + tree[(2 * ti) + 2];
}
int diffr(int arr[], int ind, int val)
{
    return val - arr[ind];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    int q;
    cin >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *tree = new int[4 * n];
    buildtree(arr, tree, 0, n - 1, 0);
    while (q--)
    {
        int diff = 0;
        int k, a, b;
        cin >> k >> a >> b;
        if (k == 1)
        {
            diff = updateindex(tree, 0, n - 1, 0, a - 1, b);
            for (int i = 0; i < 4 * n; i++)
            {
                cout << tree[i] << " ";
            }
            cout << '\n'
                 << diffr(arr, a - 1, b) << '\n';
            for (int i = 0; i < 4 * n; i++)
            {
                cout << tree[i] << " ";
            }
            update_index(tree, 0, n - 1, 0, a - 1, b - 1, diff);
        }
        /* if (k == 2)
        {
            cout << getsum(tree, 0, n - 1, a - 1, b - 1, 0) << '\n';
        }*/
    }
    return 0;
}