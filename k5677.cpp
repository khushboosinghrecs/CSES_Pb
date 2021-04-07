#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        cout << "Case #" << i << ": ";
        string str;
        cin >> str;
        int totalinleft = 0;
        for (int i = 0; i < str.size(); i++)
        {
            int curr = str[i] - '0';
            if (curr == totalinleft)
            {
                cout << str[i];
            }
            else if (curr > totalinleft)
            {
                for (int i = 0; i < curr - totalinleft; i++)
                {
                    cout << '(';
                }
                totalinleft = curr;
                cout << str[i];
            }
            else
            {
                //wait soch raha
                for (int i = 0; i < totalinleft - curr; i++)
                {
                    cout << ')';
                }
                cout << str[i];
                totalinleft = curr;
            }
        }

        for (int i = 0; i < totalinleft; i++)
        {
            cout << ')';
        }
        cout << '\n';
        //done  ?
    }
    return 0;
}
//
