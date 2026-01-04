#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,m; cin>>n>>m;
    
    vector<vector<pair<ll,ll>>> adj(n+1);
    for(int i=0;i<m;i++){
        ll a,b,c; cin>>a>>b>>c;
        adj[a].push_back(make_pair(b,c));
    }
    
    vector<ll> DP(n+1,LLONG_MAX);
    vector<ll> visited(n+1,0);
    DP[1]=0;
    
    priority_queue<pair<ll,ll>> pq;
    pq.push(make_pair(0,1));
    
    
    while(!pq.empty()){
        pair<ll,ll> p=pq.top();
        ll u=p.second;
        pq.pop();
        
        if(visited[u]==1) continue;
        
        visited[u]=1;
        
        for(auto i: adj[u]){
            // cout<<i.first<<endl;
            if(DP[u]+i.second<DP[i.first]){
                DP[i.first]=DP[u]+i.second;
                pq.push(make_pair(-DP[i.first],i.first));
            }
        }
        
    }
    
    for(int i=1;i<=n;i++){
        cout<<DP[i]<<" ";
    }cout<<endl;


}