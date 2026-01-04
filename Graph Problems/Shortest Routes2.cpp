#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAXI 100000000000000

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,m,q; cin>>n>>m>>q;
    
    vector<vector<pair<ll,ll>>> adj(n+1);
    for(int i=0;i<m;i++){
        ll a,b,c; cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    
    vector<vector<ll>> DP(n+1,vector<ll>(n+1,MAXI));
    
    //INITIALIZATION
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==j) DP[i][j]=0;
        }
    }
    
    for(int i=0;i<n+1;i++){
        for(auto j: adj[i]){
            DP[i][j.first]=min(DP[i][j.first],j.second);
        }
    }
    
    for(int k=0;k<n+1;k++){
        for(int i=0;i<n+1;i++){
            for(int j=0;j<n+1;j++){
                if(DP[i][j]>DP[i][k]+DP[k][j]){
                    DP[i][j]=DP[i][k]+DP[k][j];
                }
            }
        }
    }
    
    ll x,y;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        if(DP[x][y]==MAXI){
            cout<<-1<<endl;
            continue;
        }
        cout<<DP[x][y]<<endl;
        
    }
    


}
