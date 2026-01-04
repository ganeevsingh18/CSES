#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
 
using namespace std;
typedef long long ll;
 
int main() {
   
        ll n,m; cin>>n>>m;
        vector<ll> v1(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        vector<vector<ll>> DP(n,vector<ll>(m+1,0));
        
        if(v1[0]==0) {for(int i=1;i<m+1;i++) DP[0][i]=1;}
        else {DP[0][v1[0]]=1;}
        
        
        for(int i=1;i<n;i++){
            ll first, second, third;
            if(v1[i]!=0){
                ll temp=v1[i];
                temp==1 ? third=0: third=DP[i-1][temp-1];
                temp==m ? first=0: first=DP[i-1][temp+1];
                second=DP[i-1][temp];
                DP[i][temp]=(first+second+third)%MAX;
                continue;
            }
            
            for(int j=1;j<m+1;j++){
                j==1 ? third=0: third=DP[i-1][j-1];
                j==m ? first=0: first=DP[i-1][j+1];
                second=DP[i-1][j];
                DP[i][j]=(first+second+third)%MAX;
            }
        }
        
        ll ans=0;
        for(int j=1;j<m+1;j++){
            ans+=DP[n-1][j];
            ans=ans%MAX;
        }
        cout<<ans<<endl;
        
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m+1;j++){
        //         cout<<DP[i][j]<<" ";
        //     }cout<<endl;
        // }
    
}
