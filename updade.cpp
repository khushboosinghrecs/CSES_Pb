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

void update(int arr[], int a, int b, int val)
{
    for (int i = a; i <= b; i++)
    {
        arr[i] = arr[i] + val;
    }
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
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int k;
        cin >> k;
        if (k == 1)
        {
            int a, b, u;
            cin >> a >> b >> u;
            update(arr, a - 1, b - 1, u);
        }
        else
        {
            int pos;
            cin >> pos;
            cout << arr[pos - 1] << '\n';
        }
    }
#ifdef OFFLINE
    t.exec_time();
#endif
    return 0;
}