// working of= operator
#include <iostream>
struct data
{
    int datas;
    data(int x)
    {
        datas = x;
    }
};
int operator=(data &a, data b)
{
    a = b;
    return b.datas;
}
main()
{
    data a = data(5);
    data b = data(10);
    //a = b;
    std::cout << (a = b) << '\n';
}