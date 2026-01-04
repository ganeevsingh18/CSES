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
    ll n,x; cin>>n>>x;
    vector<ll> vec(n);
    map<ll,vector<ll>> mp; 
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mp[vec[i]].push_back(i+1);
    }
    pair<ll,ll> ans; ans.first=0; ans.second=0;
    for(int i=0;i<n;i++){
        ll temp=x-vec[i];
        if(temp==vec[i]){
            if(mp[temp].size()>1){
                ans.first=mp[temp][0]; ans.second=mp[temp][1];
                break;
            }
        }else{
            if(mp[temp].size()>0){
                ans.first=i+1; ans.second=mp[temp][0];
                break;
            }
        }
        
    }
    
    if(ans.first==0 && ans.second==0){
        cout<<"IMPOSSIBLE"<<endl;
    }else{
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    
    
}