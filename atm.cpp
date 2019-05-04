#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int x;
    double y;
    cin >> x;
    cin >> y;
    cout.precision(6);
    if((x+0.5)<y)
    {
        if(x%5==0)
        {
            double k=y-(x+0.5);
            cout<<k;
        }
        else
        {
            {cout<< y;}
        }

    }
    else{
        cout<<y;
    }
    return 0;

}
