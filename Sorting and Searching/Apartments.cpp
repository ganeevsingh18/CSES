#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,k,temp;
    cin>>n>>m>>k;
    vector<ll> v1(n);
    multiset<ll> S;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<m;i++){
        cin>>temp;
        S.insert(temp);
    }
    sort(v1.begin(),v1.end());
    ll ans=0;
    for(int i=0;i<n;i++){
        temp=v1[i];
        auto l=S.lower_bound(temp-k);
        auto r=S.lower_bound(temp+k+1);
        if(l==S.end()){
            continue;
        }
        if(*l<temp+k+1){
            S.extract(l);
            ans++;
        }    
            
        
    }
    
    cout<<ans<<endl;
    
}
