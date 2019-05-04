#include <iostream>
#include <vector>
#include <climits>
#include <unordered_map>
#include <set>
using namespace std;
int main(void)
{
    freopen("input.txt","r",stdin);
    short testcase;
    cin >> testcase;
    while(testcase--)
    {
       int N;
       cin>> N;
       unordered_map<string,int> abc;
       vector<pair<string,string>> studentname;
       for(int i=0;i<N;i++)
       {
           string firstname,secondname;
           cin >> firstname >> secondname;
           if(abc.find(firstname)==abc.end())
           {
               abc.insert({firstname,1});
           }else{
               abc.find(firstname)->second = 2;
           }
           studentname.push_back({firstname,secondname});
       }
       for(int i=0;i<N;i++)
       {
           if(abc.find(studentname[i].first)->second==1)
           {
               cout << studentname[i].first << endl;
           }else{
               cout << studentname[i].first <<" " << studentname[i].second <<endl;
           }
       }
    }
    return 0;
}
