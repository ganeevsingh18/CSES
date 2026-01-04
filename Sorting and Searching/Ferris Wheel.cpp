#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    ll n,x; cin>>n>>x;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    sort(vec.begin(),vec.end());
    ll l=0; ll r=n-1;
    ll count=0;
    while(l<=r){
        if(l==r) {count++; break;}
        while(vec[l]+vec[r]>x){
            if(r==l) break;
            r--;
            count++;
        }
        count++;
        l++; r--;
    }
    cout<<count<<endl;
}