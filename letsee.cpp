#include<iostream>
using namespace std;
int a(int k)
{
int r=9;
if(k==199)
{
r=k;
return k;}
return r;}
int main()
{
cout<<"first is "<<a(199);
cout<<"second is"<<a(12);
return 0;
}
