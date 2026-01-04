#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int l=0; int r;
    int ans=0;
    while(l<s.size()){
        r=l+1;
        while(s[r]==s[r-1] && r<s.size()){
            r++;
        }
        ans=max(ans,r-l);
        l=r;
    }
    cout<<ans<<endl;
    
}