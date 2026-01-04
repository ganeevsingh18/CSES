#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n; cin >> n;
    ll temp; set<ll> S;
    for(int i=0;i<n;i++){
        cin>>temp;
        S.insert(temp);
    }
    cout<<S.size()<<endl;
}
