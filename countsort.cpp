#include <iostream>
#include <string>
using namespace std;
void nobelvowel(string &s)
{
    bool flag;
    flag = true;
    cout << flag << '\n';
    for (int i = 0; i < s.length() - 1; i++)
    {
        if ((s[i] != 'a' || s[i] != 'e' || s[i] != 'i' || s[i] != 'o' || s[i] != 'u') &&
            (s[i + 1] != 'a' || s[i + 1] != 'e' || s[i + 1] != 'i' || s[i + 1] != 'o' || s[i + 1] != 'u'))
        {
            cout << s[i] << " ";

            flag = false;
            cout << flag << '\n';
        }
    }

    if (flag == true)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        nobelvowel(s);
    }
    return 0;
}