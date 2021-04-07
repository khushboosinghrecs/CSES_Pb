#include<iostream>
#include<string>
using namespace std;
int main()
{
string s1, s2;
cout<<"enter string";
cin>>s1>>s2;
if(s1.size()> s2.size())
{
cout<<s1;
}
else 
{
cout<<s2;
}
return 0;
}
