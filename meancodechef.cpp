#include<iostream>
using namespace std;
#include<algorithm>
void mean(int arr[], int n, int sum)
{
    int i, k;
    for(i=0; i<n; i++)
    {
        if(sum==arr[i] && count(arr, arr+n, sum)==1)
        {
            cout<< arr[i];
        }
        else
        {
        
        }
        
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
         double sum=0; 
         for(int i=0; i<n; i++)
         {
             sum=sum+(double)arr[i];
         }
         sum=sum/n;
cout<<"result=";
mean(arr, n, sum);
    }

}