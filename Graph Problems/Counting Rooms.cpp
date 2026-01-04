#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long long ll;



void DFS(ll u, vector<vector<ll>>&adj, unordered_map<ll,ll> &visited){
    visited[u]=1;
    
    for(auto v: adj[u]){
        if(visited[v]==0){
            DFS(v,adj,visited);
        }
    }
    return;
}

ll loops(vector<vector<char>> &vec, vector<vector<ll>>&adj){
    unordered_map<ll,ll> visited;
    ll n=vec.size();
    ll m=vec[0].size();
    ll count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vec[i][j]=='.' && visited[i*m+j]==0){
                count++;
                DFS(i*m+j,adj,visited);
            }
        }
    }
    return count;
}

int main() {
    ll n,m; cin>>n>>m;
    vector<vector<ll>> adj(n*m);
    vector<vector<char>> vec(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll count=m*i+j;
            if(i>0){ if(vec[i-1][j]=='.') adj[count].push_back(count-m);}
            if(j>0){ if(vec[i][j-1]=='.') adj[count].push_back(count-1);}
            if(i<n-1){ if(vec[i+1][j]=='.') adj[count].push_back(count+m);}
            if(j<m-1){ if(vec[i][j+1]=='.') adj[count].push_back(count+1);}
        }
    }
    
    // for(auto i: adj){
    //     for(auto j: i){
    //         cout<<j<<" ";
    //     }cout<<endl;
    // }
    
    ll loop=loops(vec,adj);
    cout<<loop<<endl;
    
}