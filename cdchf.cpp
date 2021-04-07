#include <iostream>
using namespace std;
int main()
{
    int a[7] = {375, 750, 723, 662, 656, 619};
    //int a[7] = {20, 10, 9, 8, 6, 5};
    int i, j, min, count = 0;
    min = a[0];
    for (i = 0; i < 7 - 5; i++)
    {
        min = a[i];
        cout << "i=" << i;
        for (j = i; j < 5 + i; j++)
        {
            cout << j << "= j";
            if (a[j] < a[i])
            {
                min = a[j];
                count++;
                cout << count << " count";
                //cout << min << "min";
            }
            cout << min << " =min";
        }
    }
    cout << count << "=count" << '\n';
    return 0;
}