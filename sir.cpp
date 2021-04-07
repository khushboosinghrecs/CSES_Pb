#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> st;
int constructSTU(vector<int> &nums, int l, int r, int idx)
{
    if (l == r)
    {
        st[idx] = nums[l];
        return st[idx];
    }
    int mid = (l + (r - l) / 2);
    st[idx] = min(constructSTU(nums, l, mid, 2 * idx + 1),
                  constructSTU(nums, mid + 1, r, 2 * idx + 2));
    return st[idx];
}

int findn(int i, int j, int l, int r, int idx)
{
    if (i <= l && j >= r)
        return st[idx];
    if (r < i || j < l)
        return INT_MAX;
    int mid = (l + (r - l) / 2);
    return min(findn(i, j, l, mid, 2 * idx + 1), findn(i, j, mid + 1, r, 2 * idx + 2));
}
int main()
{
    int t = 1;
    while (t--)
    {
        st.clear();
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int x = (int)(ceil(log2(n)));
        int max_size = 2 * (int)pow(2, x) - 1;
        st = vector<int>(max_size);
        constructSTU(arr, 0, n - 1, 0);
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            cout << findn(l, r, 0, n - 1, 0) << "\n";
        }
        cout << "\n";
    }
    return 0;
}