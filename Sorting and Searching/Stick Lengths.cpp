#include <bits/stdc++.h>
#define MAXI 1000000007

using namespace std;
typedef long long ll;

void fastin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main() {
    fastin();
    ll n; cin>>n;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    ll x1=vec[(n-1)/2]; ll x2=vec[n/2];
    ll t1=0; ll t2=0;
    for(int i=0;i<n;i++){
        t1+=abs(vec[i]-x1);
    }
    for(int i=0;i<n;i++){
        t2+=abs(vec[i]-x2);
    }
    cout<<min(t1,t2)<<endl;
    
}
