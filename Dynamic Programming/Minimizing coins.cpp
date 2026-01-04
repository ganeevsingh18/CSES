#include <bits/stdc++.h>
#define MAXI 100000007
using namespace std;
typedef long long ll;

int main(){
    ll n,x; cin>>n>>x;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    vector<ll> DP(x+1,INT_MAX);
    DP[0]=0;
    
    for(int i=1;i<x+1;i++){
        for(int j=0;j<n;j++){
            ll temp=vec[j];
            if(i-temp<0) continue;
            DP[i]=min(DP[i],DP[i-temp]+1);
        }
    }
    if(DP[x]==INT_MAX){
        cout<<-1<<endl;
    }else{
        cout<<DP[x]<<endl;
    }
}