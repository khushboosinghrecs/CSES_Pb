#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, string> abc;

    abc.insert({1, "khushi"});
    abc.insert({1, "krishna"});
    abc.insert({3, "tanu"});
    abc.insert({3, "z"});
    abc.insert({5, "kanchan"});
    abc.insert({5, "saurabh"});
    abc.insert({7, "juhi"});
    abc.insert({7, "aditi"});
    abc.insert({7, "leelu"});

    //copy khol ke dekho jo dopahar me btataya  tha ... sab clear ho jaega
    // hmm mult map k bare m to thk h lekin mai orderem m hash chai k bare m soch rhi thi jo av hua ki ek hi object ho skta h...
    // oye isme chaining kaise krenge... ye puchhna tha... ? changing  matlab ?unorderd m hi  n hash chain hota h... haaa ohh m smjhi wt
    multimap<int, string>::iterator k;
    k = abc.find(1);
    if (k != abc.end())
    {
        // ab kya? valuekaise
        cout << " its associated value is" << k->second;
    }

    //since it is not multimap so only object could be assigned for a keyohh
    for (auto x : abc)
    {
        cout << x.first << ' ' << x.second << '\n';
    }

    return 0;
}
