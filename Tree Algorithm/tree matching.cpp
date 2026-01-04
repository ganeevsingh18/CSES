#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



ll DFS(ll u, vector<vector<ll>> &adj,vector<ll>&DP,vector<bool>&vis){
    vis[u]=1;
 
    for(auto v: adj[u]){
        if(!vis[v]){
            DP[u]=max(DP[u],DFS(v,adj,DP,vis));
        }
    }
    return DP[u]+1;
}
ll start(vector<vector<ll>> &adj,vector<ll>&DP,vector<bool>&vis){
    ll ans=0;
    vis[1]=1;
    vector<ll> sols;
    for(auto i: adj[1]){
        if(!vis[i]){
            ll temp=DFS(i,adj,DP,vis);
            sols.push_back(temp);
        }
    }
    for(int i=0;i<sols.size();i++){
        ans+=(sols[i]+1)/2;
    }
    return ans;
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
  
    ll n; cin>>n;
    vector<vector<ll>> adj(n+1);
    
    vector<pair<ll,ll>> edges;
    ll u,v;
    for(int i=0;i<n;i++){
        cin>>u>>v;
        edges.push_back(make_pair(u,v));
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> DP(n+1,0);
    vector<bool> vis(n+1,0);
    ll ans=start(adj,DP,vis);
    // cout<<ans<<endl;
    cout<<ans<<endl;
    
}
