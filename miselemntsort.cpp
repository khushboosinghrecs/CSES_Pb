#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int a[]= {1,2,4,5,6,7};
int i, k, n;
n=a.l/a[0];
k=a[0]-0;
for(i=0; i<n; i++)
{
if(a[i]-i!=k)
{
cout<<i+k;
}
}
return 0;
}

