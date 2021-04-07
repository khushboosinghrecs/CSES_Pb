#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=1;i<=test;i++){
        int n;
        cin >> n;
        int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> arr[i][j];
            }
        }

        long long int trace = 0;
        for(int i=0;i<n;i++){
            trace = trace + arr[i][i];
        }
        set<int> x;
        int row = 0;
        int col = 0;
        for(int i=0;i<n;i++){
            x.clear();
            for(int j=0;j<n;j++){
                if(x.find(arr[i][j]) == x.end()){
                     x.insert(arr[i][j]);

                }
                else{

                    row++;
                    x.clear();
                    break;
                }
            }
        }

        x.clear();
        for(int i=0;i<n;i++){
            x.clear();
            for(int j=0;j<n;j++){
                if(x.find(arr[j][i]) == x.end())
                {
                     x.insert(arr[j][i]);
                }
                else{
                    col++;
                    x.clear();
                    break;
                }
            }
        }

        cout << "Case #" << i << ":" << " " << trace << " " << row << " " << col << '\n';
    }
    return 0;
}
