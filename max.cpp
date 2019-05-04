#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int testcase;
    cout<<"enter test case";
    cin >> testcase;
    int point;
    int sizeofstr;

    string strgiven;
    while(testcase--)
    {
    cout<<"enter the sizeofstr point strgiven";
        cin >> sizeofstr >> point;
        cin >> strgiven;
        int max = point;
        int min = point;
        for(int i = 0; i < strgiven.size(); i++)
        {
            if(strgiven[i]=='L')
            {
            cout<<strgiven[i];
                point = point -1;
            }else{
                point = point + 1;
            }

            if(point > max)
            {
                max = point;
            }
            if(point < min)
            {
                min = point;
            }
        }

        cout << (max - (min - 1)) << endl;
    }

    return 0;
}
