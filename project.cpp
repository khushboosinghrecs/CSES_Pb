#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int mxn = 2e5;
#define ar array
array<int, 3> arr[mxn];

int main()
{
    //cout << arr.size() << '\n';
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][1] >> arr[i][0] >> arr[i][2];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i][0] << "  " << arr[i][1] << "  " << arr[i][2] << '\n';
    }
    set<ar<ll, 2>> dp;
    dp.insert({0, 0});
    ll ldp = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = dp.lower_bound({arr[i][1]});

        it--;
        //cout << (*it)[1] << " =it " << arr[i][1] << '\n';
        ldp = max(ldp, (*it)[1] + arr[i][2]);
        dp.insert({arr[i][0], ldp});
        //cout << arr[i][0] << " ** " << arr[i][1] << '\n';
    }
    cout << ldp;
    return 0;
}