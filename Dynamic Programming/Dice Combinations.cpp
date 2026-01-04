#include <bits/stdc++.h>
#define MAXI 1000000007
using namespace std;
typedef long long ll;

int main(){
    ll n; cin>>n;
    vector<ll> DP(n+1,0);
    DP[0]=1;
    for(int i=0;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                DP[i]+=DP[i-j];
                DP[i]=DP[i]%MAXI;
            }
        }
    }
    cout<<DP[n]<<endl;
    
    
}