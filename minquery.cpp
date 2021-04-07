#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;
class Timer
{
public:
    Timer()
    {
        start_t = chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        end_t = chrono::high_resolution_clock::now();
    }
    void exec_time()
    {
        end_t = chrono::high_resolution_clock::now();
        chrono::duration<double> diff = end_t - start_t;
        cout << fixed << diff.count() << endl;
    }

private:
    chrono::high_resolution_clock::time_point start_t;
    chrono::high_resolution_clock::time_point end_t;
};

int tree[8 * 1000001];
#define min(a, b) (a < b ? a : b)
#define INF 1e9 + 1
void build(int i, int ss, int se, int arr[], int tree[])
{
    if (ss == se)
    {
        tree[i] = arr[ss];
        return;
    }

    int mid = ss + (se - ss) / 2;
    build(i * 2, ss, mid, arr, tree);
    build(i * 2 + 1, mid + 1, se, arr, tree);
    tree[i] = min(tree[i * 2], tree[i * 2 + 1]);
}

bool isoverlap(int a, int b, int x, int y)
{
    if (x >= a and x <= b)
    {
        return true;
    }
    if (a >= x and a <= y)
    {
        return true;
    }
    return false;
}

int getans(int i, int ss, int se, int rs, int re, int tree[])
{
    if (ss >= rs and se <= re)
    {
        return tree[i];
    }

    int first, second;
    first = second = INF;
    int mid = ss + (se - ss) / 2;
    if (isoverlap(ss, mid, rs, re))
    {
        first = getans(i * 2, ss, mid, rs, re, tree);
    }

    if (isoverlap(mid + 1, se, rs, re))
    {
        second = getans(i * 2 + 1, mid + 1, se, rs, re, tree);
    }
    return min(first, second);
}

int updateindex(int i, int ss, int se, int index, int value, int tree[])
{
    if (ss == se && ss == index)
    {
        return tree[i] = value;
    }

    if (ss == se)
    {
        return tree[i];
    }
    int first, second;
    first = second = INF;
    int mid = ss + (se - ss) / 2;
    if (index >= ss and index <= mid)
    {
        second = tree[i * 2 + 1];
        first = updateindex(i * 2, ss, mid, index, value, tree);
    }
    else
    {
        first = tree[i * 2];
        second = updateindex(i * 2 + 1, mid + 1, se, index, value, tree);
    }

    tree[i] = min(first, second);
    return tree[i];
}
int main()
{
#ifdef OFFLINE
    Timer t;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int q;
    cin >> q;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    fill(tree, tree + 8 * 100001, INF);
    build(1, 1, n, arr, tree);
    while (q--)
    {
        int abc;
        cin >> abc;
        if (abc == 1)
        {
            int index, value;
            cin >> index >> value;
            updateindex(1, 1, n, index, value, tree);
            continue;
        }

        int a, b;
        cin >> a >> b;
        cout << getans(1, 1, n, a, b, tree) << '\n';
    }
#ifdef OFFLINE
    t.exec_time();
#endif
    return 0;
}