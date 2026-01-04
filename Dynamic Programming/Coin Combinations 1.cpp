#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long long ll;

int main() {
    ll n,x; cin>>n>>x;
    // cout<<n<<" "<<x<<endl;
    vector<ll> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];
  
    
    vector<ll> DP(x+1,0);
    DP[0]=1;
    for(int i=0;i<x+1;i++){
        for(int j=0;j<n;j++){
            int temp=vec[j];
            if(i-temp<0) continue;
            DP[i]+=DP[i-temp];
            DP[i]=DP[i]%MAX;
        }
    }
  
    cout<<DP[x]<<endl;
    
}