#include <bits/stdc++.h>
#define MAXI 1000000007

using namespace std;
typedef long long ll;



void fastin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

ll expo(ll a, ll b){
    if(b==0) return ll(1);
    ll temp=expo(a,b/2);
    temp=(temp*temp)%MAXI;
    if(b%2){
        return ((a%MAXI)*temp)%MAXI;
    }else{
        return (temp)%MAXI;
    }
}


int main() {
    fastin();
    ll t; cin>>t;
    while(t--){
        ll a,b; cin>>a>>b;
        cout<<expo(a,b)<<endl;
        
    }
}
