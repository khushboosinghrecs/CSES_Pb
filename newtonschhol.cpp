#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string str;
    getline(cin, str);
    int count = 0;
    string str1 = "";
    for (int i = 0; i <= str.length(); i++)
    {

        if (str[i] == ' ' || str[i] == '\0')
        {
            //count = 0;
            for (int i = str1.length() - 1; i >= 0; i--)
            {
                cout << str1[i];
            }
            cout << " ";
            str1 = "";
        }
        else
        {

            str1 = str1 + str[i];
        }
    }

    return 0;
}