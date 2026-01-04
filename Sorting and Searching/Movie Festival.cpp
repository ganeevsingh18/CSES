#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

void fastin() {
    ios_base::sync_with_stdio(false); // Unsynchronize C and C++ I/O streams
    cin.tie(NULL);                    // Untie cin from cout
}

int main(){
    fastin();
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second>>v[i].first;
    }
    sort(v.begin(),v.end());
    
    ll last=0; ll count=0;
    for(int i=0;i<n;i++){
        if(last<=v[i].second){
            count++;
            last=v[i].first;
        }
    }
    cout<<count<<endl;
    
    
    
}