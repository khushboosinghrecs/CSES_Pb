#include <bits/stdc++.h>
using namespace std;
set<string> st;
void fun(string s, string str[], int n)
{
    //cout << << n << '\n';

    string k = "RGO";
    if (s.length() == n)
    {
        cout << s << '\n';
        st.insert(s);
        return;
    }
    for (int j = 0; j < 3; j++)
    {
        s = k[j];
        for (int i = 0; i < n; i++)
        {
            cout << s << '\n';
            fun(str[i][0] + s, str, n);
            fun(str[i][1] + s, str, n);
            fun(str[i][2] + s, str, n);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        str[i] = "RGO";
    }
    fun(" ", str, n);
    cout << st.size();
    return 0;
}