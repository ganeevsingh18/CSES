#include <bits/stdc++.h>
#define MAXI 1000000007

using namespace std;
typedef long long ll;


void DFS(ll u,vector<vector<ll>> &adj, map<ll,bool> &vis){
    vis[u]=1;
    for(auto v: adj[u]){
        if(vis[v]!=1){
            DFS(v,adj,vis);
        }
    }
    return;
}

void find_roads(vector<vector<ll>> &adj,vector<ll> &roads){
    map<ll,bool> vis;
    ll n=adj.size();
    for(int i=1;i<n;i++){
        if(vis[i]!=1 ){
            roads.push_back(i);
            DFS(i,adj,vis);
        }
    }
    return;
}


void fastin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fastin();
    ll n,m; cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    for(int i=0;i<m;i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    
    vector<ll> roads;
    find_roads(adj,roads);
    
    cout<<roads.size()-1<<endl;
    for(int i=0;i<int(roads.size())-1;i++){
        cout<<roads[i]<<" "<<roads[i+1]<<endl;
    }
    
    
}
