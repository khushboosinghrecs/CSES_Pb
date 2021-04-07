#include <bits/stdc++.h>
using namespace std;
int fun(int n)
{
    if (n == 3)
        return 1;
    for (int i = 1; i < n; i++)
    {
        cout << i << "   n  " << n << '\n';
        return i * fun(i - 1);
        cout << i << "   aftr recursion  " << n << '\n';
    }
}
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}