#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 4, 5, 5, 5, 6, 7};
    auto n = upper_bound(arr, arr + 9, 3);
    n--;
    auto k = lower_bound(arr, arr + 9, 3);
    k--;
    cout << *k;
    cout << *n;
    return 0;
}