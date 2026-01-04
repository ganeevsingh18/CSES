#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int DFS(ll u, vector<vector<ll>> &adj,vector<ll>&DP,vector<bool>&vis){
    vis[u]=1;
 
    for(auto v: adj[u]){
        if(!vis[v]){
            DP[u]+=DFS(v,adj,DP,vis);
        }
    }
    return DP[u]+1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
  
        ll n; cin>>n;
        vector<vector<ll>> adj(n+1);
        
        ll u;
        for(int i=2;i<n+1;i++){
            cin>>u;
            adj[u].push_back(i);
        }
        vector<ll> DP(n+1,0); vector<bool> vis(n+1);
        DP[1]=DFS(1,adj,DP,vis)-1;
        for(int i=1;i<=n;i++){
            cout<<DP[i]<<" ";
        }cout<<endl;
    
}
