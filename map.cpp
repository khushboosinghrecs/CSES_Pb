#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <utility>
using namespace std;
int main()
{
    map<int, string> abc;
    abc.insert({1, "khushi"});
    abc.insert({12, "krishna"});
    abc.insert({3, "tanu"});
    abc.insert({4, "z"});
    abc.insert({98, "kanchan"});
    abc.insert({6, "saurabh"});
    abc.insert({7, "juhi"});
    abc.insert({87, "aditi"});
    abc.insert({10, "leelu"});
    map<int, string>::iterator k;
    //or you can use auto hmm kr liy dono se
    k = abc.find(1);
    if (k != abc.end())
    {
        cout << " its associated value is" << k->second;
    }

    //lets iterate the whole container
    //you can see container is sorted on basis of key ?? hmm
    // this is why it is ordered map
    // oye key hi h ayese
    for (auto x : abc)
    {
        cout << x.first << ' ' << x.second << '\n';
    }

    //another way of lookup
    cout << abc[12] << '\n';
    //it will add a new object with key 12 if 12 does not exit so avoid using it
    //object find in map
    //got it ?
    // whi to kiye jo hua tha....
    map<int, string>::iterator temp = abc.find(87);
    // it should work hmm mai v soch rhiu yhi...

    if (temp != abc.end())
    {
        cout << temp->second << '\n';
    }
    //practice all function like delete clear etc ..

    return 0;
}