#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll sum=n*(n+1)/2;
    if(sum%2==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
        return 0;
    }
    vector<ll> v1,v2;
    int j;
    if(n%4==3){
        v1.push_back(1); v1.push_back(2);
        v2.push_back(3);
        j=4;
    }else{
        j=1;
    }
    
    for(int i=j;i<=n;i+=4){
        v1.push_back(i); v1.push_back(i+3);
        v2.push_back(i+1); v2.push_back(i+2); 
    }
    cout<<v1.size()<<endl;
    for(auto i: v1){
        cout<<i<<" ";
    }cout<<endl;
    cout<<v2.size()<<endl;
    for(auto i: v2){
        cout<<i<<" ";
    }cout<<endl;
}