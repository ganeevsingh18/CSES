#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MAX 1000000007;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;
    ll ans=1;
    for(int i=0;i<n;i++){
        ans*=2;
        ans=ans%MAX;
    }cout<<ans<<endl;
}