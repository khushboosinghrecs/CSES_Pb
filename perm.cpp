#include <bits/stdc++.h>
using namespace std;
void fun(int l, int r, string s)
{
    cout << " real l= " << l << '\n';
    if (l == r)
    {
        cout << s << '\n';
        return;
    }
    for (int i = l; i <= r; i++)
    {
        swap(s[i], s[l]);
        cout << " before call "
             << " i= " << i << " l= " << l << '\n';
        fun(l + 1, r, s);

        cout << "after call i= " << i << " l= " << l << '\n';
        swap(s[i], s[l]);
    }
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s;
    cin >> s;
    fun(0, s.length() - 1, s);
    return 0;
}