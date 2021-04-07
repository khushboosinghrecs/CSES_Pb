#include<iostream>
using namespace std;
int main()
{
    int arr[]={1, 2, 3, 5, 6, 9, 0, 0,9, 3};
    int n;
    n=sizeof(arr/arr[0]);
    int max;
    max=arr[0];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                i=j+1;
            }
            cout<<max<<" ";
        }
    }
    return 0;
}