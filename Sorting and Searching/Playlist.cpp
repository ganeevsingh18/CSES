#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fastio() {
    // Unsynchronize IO from C streams and untie cin from cout
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}



int main() {
    fastio();
    ll n; cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    set<ll> S;
    ll ans=0;
    ll l=0;
    for(int i=0;i<n;i++){
        if(S.find(vec[i])!=S.end()){
            while(vec[l]!=vec[i]){
                S.erase(vec[l]);
                l++;
            } S.erase(vec[l]); l++;
        }
        S.insert(vec[i]);
     
        ans=max(ans,ll(S.size()));
        
    }
    cout<<ans<<endl;
    
    return 0;
}