#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s, resul = "";
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string st;
        cin >> st;
        resul = resul + st;
    }
    sort(s.begin(), s.end());
    sort(resul.begin(), resul.end());
    cout << s << " " << resul << '\n';
    if (s == resul)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
