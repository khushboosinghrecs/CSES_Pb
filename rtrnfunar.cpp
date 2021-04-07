#include <iostream>
using namespace std;
int *fun()
{
    //this is how array is declared in c++
    //but this is not best way let's see another way
    static int a[10];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
    }
    return a;
}
int main()
{
    int *p;
    p = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << *p + i << '\n';
    }
    return 0;
}