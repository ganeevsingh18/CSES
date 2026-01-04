#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long long ll;

int main() {
    ll n,x; cin>>n>>x;
    vector<pair<ll,ll>> v1(n);
    for(int i=0;i<n;i++){ cin>>v1[i].first;}
    for(int i=0;i<n;i++){ cin>>v1[i].second;}
    sort(v1.begin(),v1.end());
    vector<ll> DP(x+1);
    DP[0]=0;
    for(int i=0;i<n;i++){
        ll cost=v1[i].second;
        ll weight=v1[i].first;
        for(int j=x;j>=0;j--){
            if(j-weight<0) continue;
            DP[j]=max(DP[j-weight]+cost,DP[j]);
        }
    }
    cout<<DP[x]<<endl;
        
    
}