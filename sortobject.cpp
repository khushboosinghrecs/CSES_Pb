#include <iostream>
#include <algorithm>
using namespace std;
struct Node
{
    int weight;
    int profit;
    Node(int w = 0, int p = 0) : weight(w), profit(p){};
};

bool operator<(Node a, Node b)
{
    return a.profit < b.profit;
}
int main()
{
    int w[] = {9, 2, 4, 7, 1};
    int p[] = {10, 18, 84, 18, 12};

    Node arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = {w[i], p[i]};
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].profit << "  " << arr[i].weight << "   ";
    }

    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].profit << ' ' << arr[i].weight << '\n';
    }
    return 0;
}