#include <bits/stdc++.h>
#define MAXI 100000007
using namespace std;
typedef long long ll;

//Breadth first serch, track a min
//add a pair<ll,ll> in queue

void distance(ll start,ll end, vector<vector<ll>> &adj,vector<ll> &ans){
    
    map<ll,ll> visited;
    
    ll n=adj.size();
    vector<ll> prev(n);
    //BFS
    queue<pair<ll,ll>> q;
    q.push(make_pair(start,0));
    
    bool found=0;
    
    while(!q.empty()){
        pair<ll,ll> p=q.front();
        ll u=p.first;
        ll d=p.second;
        q.pop();
        
        if(u==end){
            found=1;
            break;
        }
        
        for(auto i: adj[u]){
            if(visited[i]==0){
                visited[i]=1;
                prev[i]=u;
                q.push(make_pair(i,d+1));
            }
        }
    }
    
    if(found==0){
        return;
    }
    
    ll l=end;
    ans.push_back(end);
    while(l!=start){
        ans.push_back(prev[l]);
        l=prev[l];
    }
    
    
    
    
}


int main(){
    ll n,m; cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    ll u,v;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    ll start=1;
    ll end=n;
    vector<ll> ans;
    distance(start,end,adj,ans);
    if(ans.size()==0){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<ans.size()<<endl;
        reverse(ans.begin(),ans.end());
        for(auto i: ans){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    
}