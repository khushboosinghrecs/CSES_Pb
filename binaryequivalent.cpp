#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}
int count = 0;
void powerset(int i, int n, int zero, int one, unsigned int arr2[], int size)
{
    if (i == n)
    {
        if (zero == one)
        {
            count++;
        }
        return;
    }
    powerset(i + 1, n, zero, one, arr2, size);
    powerset(i + 1, n, zero + size - arr2[i], one + arr2[i], arr2, size);
}
int main()
{
    int n;
    cin >> n;
    unsigned int arr[n];
    unsigned int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sizeofmost = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = (int)(log2(arr[i]));
        sizeofmost = max(sizeofmost, temp);
    }
    for (int i = 0; i < n; i++)
    {
        int x = __builtin_popcount(arr[i]);
        arr2[i] = x;
    }
    sizeofmost = sizeofmost + 1;
    powerset(0, n, 0, 0, arr2, sizeofmost);
    count = count - 1;
    stack<int> done;
    int pos = 0;
    unsigned int x = 1;
    while (pos < sizeofmost)
    {
        if (x & count)
        {
            done.push(1);
        }
        else
        {
            done.push(0);
        }
        x = x << 1;
        pos++;
    }

    while (done.size())
    {
        cout << done.top();
        done.pop();
    }
    cout << '\n';
    return 0;
}
