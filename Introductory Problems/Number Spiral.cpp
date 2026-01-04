#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n; 
    ll x,y,k,pos;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        k=max(x,y)-1;
        if(y==min(x,y)){
            pos=y;
        }else{
            pos=k+1+(k+1-x);
        }
        if(k%2!=0){
            cout<<k*k+2*k+2-pos<<endl;
        }else{
            cout<<k*k+pos<<endl;
        }
    }
    
}