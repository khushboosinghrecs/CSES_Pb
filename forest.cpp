#include <bits/stdc++.h>
using namespace std;
int arr[1000][1000];
int findfn(int y1, int x1, int y2, int x2)
{
    return arr[y2][x2] - arr[y1][x1];
}
int main()
{
    int n, q;
    cin >> n >> q;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            char ch;
            cin >> ch;
            if (ch == '*')
            {
                count = count + 1;
            }
            else
                arr[j][i] = count;
        }
    }
    while (q--)
    {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << findfn(y1 - 1, x1 - 1, y2 - 1, x2 - 1) << '\n';
    }

    return 0;
}