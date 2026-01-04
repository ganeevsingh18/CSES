#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool sortbyfirst(const vector<ll> &v1, const vector<ll> &v2){
    if(v1[0]==v2[0]){
        return v1[1]>v2[1];
    }
    return v1[0]<v2[0];
}

bool sortbysec(const vector<ll> &v1, const vector<ll> &v2){
    if(v1[1]==v2[1]){
        return v1[0]>v2[0];
    }
    return v1[1]<v2[1];
}

bool sortbythird(const vector<ll> &v1, const vector<ll> &v2){
    return v1[2]<v2[2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>>n;
    
    vector<vector<ll>> vec(n);
    vector<vector<ll>> a1(n,vector<ll>{0,0});
    vector<vector<ll>> a2(n,vector<ll>{0,0});
    
    multiset<ll> lefts; multiset<ll> rights;

    for(int i=0;i<n;i++){
        ll x,y; cin>>x>>y;
        vec[i]={x,y,i};
        lefts.insert(x); rights.insert(y);
    }
    
    
    
    sort(vec.begin(),vec.end(),sortbyfirst);
    
    for(int i=0;i<n;i++){
        auto it=prev(rights.lower_bound(vec[i][1]+1));
        a1[i][1]=vec[i][2];
        if(it!=rights.begin()){
            a1[i][0]=1;
        }
        rights.erase(it);
    }
    
    
    
    sort(vec.begin(),vec.end(),sortbysec);
    
    // for(int i=0;i<n;i++){
    //     cout<<vec[i][1]<<" ";
    // }cout<<endl;
    
    for(int i=0;i<n;i++){
        // cout<<vec[i][0]<<endl;
        a2[i][1]=vec[i][2];
        auto it=prev(lefts.lower_bound(vec[i][0]+1));
        // cout<<*it<<endl;
    
        if(it!=lefts.begin()){
            // cout<<"why"<<endl;
            a2[i][0]=1;
        }
        lefts.erase(it);
    }
    
    sort(a1.begin(),a1.end(),sortbysec);
    sort(a2.begin(),a2.end(),sortbysec);
    
    for(int i=0;i<n;i++){
        cout<<a1[i][0]<<" ";
    }cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a2[i][0]<<" ";
    }cout<<endl;
    
    
    return 0;
}
// 1 1 1 3 3 2 4 4 4 5