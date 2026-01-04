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
    
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll sum=0;
    ll start=0;
    ll ans=INT_MIN;
    for(ll end=0;end<n;end++){
        sum+=vec[end];
        while(sum<0 && start<=end){
            sum-=vec[start];
            start++;
        }
        if(sum!=0) ans=max(ans,sum);
        ans=max(ans,vec[end]);
    }
    cout<<ans<<endl;
    
    
    return 0;
}