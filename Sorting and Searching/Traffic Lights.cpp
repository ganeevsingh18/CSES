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
    ll n,m; cin>>n>>m;
    vector<ll> vec(m);

    for(int i=0;i<m;i++) cin>>vec[i];
    set<ll> pos;
    multiset<ll> len;
    
    //initialising
    pos.insert(0); pos.insert(n);
    len.insert(n);
    
    for(int i=0;i<m;i++){
        pos.insert(vec[i]);
        
        auto it=pos.find(vec[i]);
        auto ne=next(it);
        auto pre=prev(it);
        
        auto de=len.find(*ne-*pre);
        len.erase(de);
        len.insert(*it-*pre);
        len.insert(*ne-*it);
        
        cout<<*prev(len.end())<<" ";
        
    }
    cout<<endl;
    
    
    return 0;
}