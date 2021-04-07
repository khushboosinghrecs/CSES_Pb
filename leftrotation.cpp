#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
int numberofelements, rotation, temp;
    int v[numberofelements];
    cin>>numberofelements;
    cin>>rotation;
    for(int i=0; i<numberofelements; i++)
{
    cin>>v[i];
}
for(int i=0; i<rotation; i++)
{
    temp=v[0];
    for(int j=0; j<numberofelements-1; j++)
    {
v[j]=v[j+1];
    }
v[numberofelements-1]=temp;
}
for (int i=0; i<numberofelements; i++)
{
    cout<<v[i];
}
return 0;
}

