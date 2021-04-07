#include <bits/stdc++.h>
using namespace std;
vector<string> glbl;
int ans[1000001];
bool hasresult[1000001];
int fun(int n, string arr[], string x)
{
    if (x.length() == 0)
        return 1;
  /*  if (x.length() > 0)
    {
        return 0;
    }*/
    if (hasresult[x.length()] == true)
        return ans[x.length()];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        size_t pos = x.find(arr[i]);
        if (pos != std::string::npos)
        {
            // If found then erase it from string
            x.erase(pos, arr[i].length());
            sum = sum + fun(n, arr, x);
        }
       
    }
    hasresult[x.length()] = true;
    ans[x.length()] = sum;
    return sum;
}
int main()
{
    //write your code here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n;
        cin >> n;
        string str[n];
        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
        }
        if (fun(n, str, s) >= 0)
        {
            cout << "Yes" << '\n';
        }
        else
            cout << "No" << '\n';
    }
    return 0;
}