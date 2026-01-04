#include <bits/stdc++.h>
#define MAXI 100000007
using namespace std;
typedef long long ll;

//NUmber of connected graphs
// if>2; yes, first graph 1, else 2
//else no

bool DFS(ll u, vector<vector<ll>>&adj, map<ll,ll>&visited,ll &color){
    
    visited[u]=color;
    
    bool found=0;
    ll new_color=0;
    if(color==1){
        new_color=2;
    }else{
        new_color=1;
    }
    
    for(auto i: adj[u]){
        if(visited[i]==0){
            if(DFS(i,adj,visited,new_color)){
                found=1;
            }
        }else if(visited[i]!=new_color){
            found=1;
        }
    }
    return found;
    
}


bool coloring(vector<vector<ll>>&adj,vector<ll>&ans){
    
    ll n=adj.size();
    map<ll,ll> visited;
    
    bool found=0;
    for(int i=1;i<n;i++){
        if(visited[i]==0){
            ll color=1;
            if(DFS(i,adj,visited,color)){
                found=1;
            }
        }
    }
    for(auto i: visited){
        ans[i.first]=i.second;
    }
    
    
    return found;
    
}

int main(){
    ll n,m; cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    
    for(int i=0;i<m;i++){
        ll u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    vector<ll> ans(n+1);
    
    bool found=coloring(adj,ans);
    
    if(found==1){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        for(int i=1;i<n+1;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
    
    
}