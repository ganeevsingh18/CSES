#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fastio() {
    // Unsynchronize IO from C streams and untie cin from cout
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}



int main() {
    fastio();
    ll n,m;
    string s1,s2; cin>>s1>>s2;
    n=s1.size(); m=s2.size();
    vector<vector<ll>> DP(n+1,vector<ll>(m+1,0));
    
    //B
    for(ll i=0;i<n+1;i++){
        for(ll j=0;j<m+1;j++){
            if(i==0 || j==0) DP[i][j]=max(i,j);
        }
    }
    
    //S+R+T
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            DP[i][j]=min({DP[i-1][j-1],DP[i][j-1],DP[i-1][j]});
            if(s1[i-1]!=s2[j-1]){
                DP[i][j]++;
            }else{
                DP[i][j]=DP[i-1][j-1];
            }
        }
    }

    
    //O
    cout<<DP[n][m]<<endl;
    
    
    return 0;
}