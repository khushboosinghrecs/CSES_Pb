#include<iostream>
#include<map>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,use;
		cin>>n>>k;
		int dispute=k;
		int a[n+1];
		map<int,int> map1;
		int answer=0,tc=0,tt=1;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(map1.count(a[i]))
			{
				if(map1[a[i]]==1)
					tc++;
				tc++;
			}
			if(tc>=k)
			{
				tc=0;
				tt++;
				map1.clear();
			}
			map1[a[i]]++;
		}
		if(k==1)
		{
		    int arr2[101];
		    for(int j=0;j<=100;j++)
		        arr2[j]=0;
		    int dispute=1;
		    for(int j=0;j<n;j++)
		    {
		        if(arr2[a[j]]==0)
		            arr2[a[j]]++;
		          else
		          {
		              dispute+=k;
		              for(int i=0;i<=100;i++)
		                arr2[i]=0;
		              j--;
		          }
		    }
		    cout<<dispute<<endl;
		}
		else
		{
		int column[n+1][n+1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				column[i][j]=0;
		}
		for(int i=0;i<n;i++)
		{
			map1.clear();
			for(int j=i;j<n;j++)
			{
            if(j==0)
                use=0;
            else
                use=column[i][j-1];
            column[i][j]=use;
			if(map1.count(a[j]))
			{
				if(map1[a[j]]==1)
					column[i][j]++;
				column[i][j]++;
			}
			map1[a[j]]=map1[a[j]]+1;
			}
		}
		
		answer=999999;
		for(int t1=1;t1<=tt;t1++)
		{
			int pro[t1+1][n+1]={0};
			for(int i=0;i<=t1;i++)
			{
				for(int j=0;j<=n;j++)
					pro[i][j]=0;
			}
			
			for(int i=1;i<n+1;i++)
				pro[1][i]=column[0][i-1];
			
			for(int i=1;i<=t1;i++)
				pro[i][1]=0;
				
			for(int i=2;i<=t1;i++)
			{
				for(int j=2;j<=n;j++)
				{
					int best=999999;
					
					for(int p=1;p<j;p++)
						best=(min(best,pro[i-1][p]+column[p][j-1]));
					
					pro[i][j]=best;
				}
			}
			answer=min(t1*k+pro[t1][n],answer);
		}
		int arr[101];
		for(int j=0;j<=100;j++)
			arr[j]=0;
		dispute=k;
		for(int j=0;j<n;j++)
		{
			if(arr[a[j]]==0)
				arr[a[j]]++;
			else
			{
				dispute+=k;
				for(int i=0;i<=100;i++)
					arr[i]=0;
				j--;
			}
		}
		answer=min(answer,dispute);
		answer=min(answer,column[0][n-1]+k);
		cout<<answer<<endl;
	} 
	}
	return 0;
}
