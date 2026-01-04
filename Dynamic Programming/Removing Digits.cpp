#include <bits/stdc++.h>
#include <algorithm>
#define MAX 1000000007
using namespace std;
typedef long long ll;

int main() {
    ll n; cin>>n;
    vector<ll> DP(n+1);
    DP[0]=0;
    for(int i=1;i<=n;i++){
        vector<ll> temp;
        ll num=i;
        while(num>0){
            temp.push_back(num%10);
            num=num/10;
        }

        
        DP[i]=INT_MAX;
        for(auto j: temp){
            DP[i]=min(DP[i],DP[i-j]+1);
        }
    }
    cout<<DP[n]<<endl;
    
}