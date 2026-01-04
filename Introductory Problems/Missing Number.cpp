#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n;
    set<ll> S;
    for(ll i=1;i<=n;i++){
        S.insert(i);
    }
    ll temp;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        S.erase(temp);
    }
    cout<<*S.begin();
}