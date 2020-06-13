#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using namespace std;

mp::cpp_int fact(mp::cpp_int a)
{
    if (a == 1)
        return 1;
    if (a == 0)
        return 0;
    return a * fact(a - 1);
}

int main()
{
    mp::cpp_int a;
    cin >> a;
    cout << fact(a) << endl;
    return 0;
}
