#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;     // header file for Standard Library
typedef long long int ll;
ll solve(vector<int> &vrr)
{
    ll sum = 0;
    for (int i = vrr.size() - 1; i >= 0; i--)
        sum += i * (ll)vrr[i] - (vrr.size() - 1 - i) * (ll)vrr[i];
    return sum;
}
int main()
{

    //Your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n = s.length();
    ll sum = 0;
    vector<int> indexs[26];
    int arrs = 26;
    for (int i = 0; i < n; i++)
    {
        int temp = s[i] - 'a';
        indexs[temp].push_back(i);
    }
    for (int i = 0; i < arrs; i++)
    {
        sum = sum + solve(indexs[i]);
    }
    cout << sum;
    return 0;
}
