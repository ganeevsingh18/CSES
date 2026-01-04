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
    multiset<ll> S;
    ll count=0;
    for(int i=0;i<n;i++){
        auto it=S.lower_bound(vec[i]+1);
        if(it==S.end()){
            count++;
            S.insert(vec[i]);
        }else{    
            S.erase(it);
            S.insert(vec[i]);
        }
        
    }
    cout<<count<<endl;
    
    return 0;
}