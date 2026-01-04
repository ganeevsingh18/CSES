#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
typedef long long ll;
using namespace __gnu_pbds;
using namespace std;

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> order_statistics_tree;



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    order_statistics_tree ost;
    ll n,k; cin>>n>>k;
    
    for(int i=1;i<=n;i++){
        ost.insert(i);
    }
    
    ll index=k%ost.size();
    while(ost.size()!=0){
        ll temp=*ost.find_by_order(index);
        cout<<temp<<" ";
        ost.erase(temp);
        index=(index+k)%(max(ll(1),ll(ost.size())));
    }
}