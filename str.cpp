#include <iostream>
#include <string>
using namespace std;
char c[51][51];
void fun(int n, int m, char c[51][51])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << c[i][j];
        }
        cout << '\n';
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        int n;
        cin >> n;
        string a, b;

        cin >> a >> b;
        for (int l = 0; l < n; l++)
        {
            for (int j = 0; j < n; j++)
            {
                if (l == j)
                    c[l][j] = 'Y';
                else
                    c[l][j] = 'N';
            }
        }
        for (int l = 0; l < n; l++)
        {
            int j = l + 1;
            while (j < n)
            {
                if (a[j] == 'Y' && b[j - 1] == 'Y')
                    c[l][j] = 'Y';
                else
                    break;
                j++;
            }
            j = l - 1;
            while (j >= 0)
            {
                if (a[j] == 'Y' && b[j + 1] == 'Y')
                    c[l][j] = 'Y';
                else
                    break;
                j--;
            }
        }
        cout << "Case #" << i << ":" << '\n';
        fun(n, n, c);
    }
    return 0;
}