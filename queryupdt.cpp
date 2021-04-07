#include <iostream>
#include <math.h>
using namespace std;
void fun(int n)
{
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            cout << n << " ";
            n = n / 2;
        }
        else
        {
            cout << n << " ";
            n = n * 3 + 1;
        }
    }
    if (n == 1)
        cout << n;
    return;
}
int main()
{
    //write your code here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    fun(n);
    cout << '\n';

    return 0;
}