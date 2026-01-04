#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin>>n; ll temp; ll maxi; ll ans=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(i==0) {maxi=temp; continue;}
        if(temp<maxi){
            ans+=(maxi-temp);
        }
        maxi=max(maxi,temp);
    }
    cout<<ans;
    
}