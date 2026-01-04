#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define MAXI 1000001
typedef long long ll;

int main() {
    ll n; cin>>n;
    vector<ll> vec(n);
    vector<ll> count(MAXI,0);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        count[vec[i]]++;
    }
    vector<ll> numbers(MAXI);
    ll ans=1;
    for(ll i=1;i<MAXI;i++){
        ll multiples=0;
        for(ll j=i;j<MAXI;j+=i){
            multiples+=count[j];
        }
        if(multiples>=2) ans=max(ans,i);
    }
    cout<<ans<<endl;
}