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
    for(int i=0;i<n;i++){
        int temp=vec[i];
        for(int j=0;j<=x;j++){
            if(j-temp<0) continue;
            DP[j]+=DP[j-temp];
            DP[j]=DP[j]%MAX;
        }
    }
  
    cout<<DP[x]<<endl;
    
}