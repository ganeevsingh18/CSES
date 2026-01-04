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
    vector<pair<ll,ll>> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first; vec[i].second=i;
    }
    sort(vec.begin(),vec.end());
    ll it=n+1; ll count=0;
    for(int i=0;i<n;i++){
        if(it>vec[i].second){
            count++;
        }
        it=vec[i].second;
    }
    cout<<count<<endl;
}
