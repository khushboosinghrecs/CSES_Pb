#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> abc;
    abc.insert(1);
    abc.insert(2);
    abc.insert(3);
    abc.insert(4);
    abc.insert(5);
    abc.insert(6);
    abc.insert(7);
    abc.insert(8);
    set<int>::iterator k;
    k = abc.find(1);
    if (k != abc.end())
    {
        cout << " its associated value is" << *k;
    }

    return 0;
}
