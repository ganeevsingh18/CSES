#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t; cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b>a) swap(a,b);
        if((a+b)%3==0 && (a<=2*b) ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}