#include <bits/stdc++.h>
#include <algorithm>

using namespace std;
typedef long long ll;


bool sortbysec(const pair<ll,ll>&a, const pair<ll,ll>&b){
    return a.second<b.second;
}

int main() {
    ll n,m; cin>>n>>m;
    multiset<ll> S; ll temp;
    
    for(int i=0;i<n;i++){cin>>temp; S.insert(temp);}
    for(int i=0;i<m;i++){
        cin>>temp;
        auto it=S.lower_bound(temp+1);
        if(it==S.begin()){
            cout<<-1<<endl; continue;
        }
        it=prev(it);
        cout<<*it<<endl;
        S.extract(*it);
    }
    
    
}