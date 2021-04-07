#include <iostream>

using namespace std;
int main()
{
    static int arr[] = {0, 1, 2, 3, 4};
    int *p[] = {arr, arr + 1, arr + 2, arr + 3, arr + 4};
    int **ptr = p;
    ptr++;
    cout << ptr - p << *ptr - arr << **ptr << endl;
    *ptr++;
    cout << ptr - p << *ptr - arr << **ptr << endl;
    *++ptr;
    cout << ptr - p << *ptr - arr << **ptr << endl;
    ++*ptr;
    //cout<< ptr-p << ptr-arr << **ptr;
    return 0;
}
