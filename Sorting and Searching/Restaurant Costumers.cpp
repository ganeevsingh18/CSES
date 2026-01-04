#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
    ll n; cin>>n;
    vector<pair<ll,ll>> vec;
    ll st,end;
    for(int i=0;i<n;i++){
        cin>>st>>end;
        vec.push_back(make_pair(st,-1));
        vec.push_back(make_pair(end,1));
    }
    sort(vec.begin(),vec.end());
    ll count=0;
    ll ans=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i].second==-1){ count++;}
        else {count--;}
        ans=max(ans,count);
    }
    cout<<ans<<endl;
    
}