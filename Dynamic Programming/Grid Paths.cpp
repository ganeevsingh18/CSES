#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long long ll;

int main() {

        ll n; cin>>n;
        vector<vector<char>> mat(n+1,vector<char>(n+1));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                cin>>mat[i][j];
            }
        }
        vector<vector<ll>> DP(n+1,vector<ll>(n+1,0));
        if(mat[1][1]!='*'){
            DP[1][1]=1;
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<n+1;j++){
                if(mat[i][j]=='.'){
                    DP[i][j]+=(DP[i-1][j]+DP[i][j-1]);
                    DP[i][j]=DP[i][j]%MAX;
                }
            }
        }
        cout<<DP[n][n]<<endl;
        
    
}