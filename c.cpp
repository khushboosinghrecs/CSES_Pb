#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> var;
vector<ll> vbr;
bool areEqual(ll arr1[], ll arr2[], ll n)
{
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
        mp[arr1[i]]++;
    for (ll i = 0; i < n; i++)
    {
        if (mp.find(arr2[i]) == mp.end())
            return false;

        if (mp[arr2[i]] == 0)
            return false;

        mp[arr2[i]]--;
    }

    return true;
}
int getOddOccurrence(vector<ll> arr, ll size)
{
    unordered_map<ll, ll> hash;
    for (ll i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (auto i : hash)
    {
        if (i.second % 2 != 0)
        {
            return i.first;
        }
    }
    return -1;
}
void findMissing(ll a[], ll b[], ll n, ll m)
{
    unordered_set<ll> s;
    for (ll i = 0; i < m; i++)
        s.insert(b[i]);
    for (ll i = 0; i < n; i++)
        if (s.find(a[i]) == s.end())
            var.push_back(a[i]);
}
void findMissing(ll a[], ll b[], ll n, ll m)
{
    unordered_set<ll> s;
    for (ll i = 0; i < m; i++)
        s.insert(b[i]);
    for (ll i = 0; i < n; i++)
        if (s.find(a[i]) == s.end())
            var.push_back(a[i]);
}
void findMissing2(ll a[], ll b[], ll n, ll m)
{
    unordered_set<ll> s;
    for (ll i = 0; i < m; i++)
        s.insert(a[i]);
    for (ll i = 0; i < n; i++)
        if (s.find(b[i]) == s.end())
            vbr.push_back(b[i]);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        var.clear();
        vbr.clear();
        ll n;
        cin >> n;
        ll arr[n];
        ll brr[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        if (areEqual(arr, brr, n) == true)
        {
            cout << 0 << '\n';
        }
        else
        {
            sort(arr, arr + n);
            sort(brr, brr + n);

            ll res = min(arr[0], brr[0]);
            findMissing(arr, brr, n, n);
            findMissing2(arr, brr, n, n);
            ll len1 = var.size();
            ll len2 = vbr.size();
            if (getOddOccurrence(var, len1) == -1 && getOddOccurrence(vbr, len2) == -1)
            {
                //cout << res << " res " << '\n';
                ll result = 0; // trs=1e9;
                ll l = 0;
                ll r = vbr.size() - 1;
                while (l < var.size())
                {
                    //cout << l << " l " << r << " r " << '\n';
                    result = result + min(2 * res, min(var[l], vbr[r]));
                    l = l + 2;
                    r = r - 2;
                }

                cout << result << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
    return 0;
}