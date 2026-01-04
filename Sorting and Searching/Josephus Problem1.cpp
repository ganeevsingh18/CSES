#include <bits/stdc++.h>
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
typedef long long ll;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> order_statistics_tree;

void fastio() {
    // Unsynchronize IO from C streams and untie cin from cout
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
}



int main() {
    fastio();
    ll n; cin>>n;
    order_statistics_tree ost;
    
    for(int i=0;i<n;i++){
        ost.insert(i+1);
    }
    
    int count=1;
    while(!ost.empty()){
        vector<int> vec;
        
        if(ost.size()==1){
            cout<<*ost.begin()<<endl;
            ost.erase(*ost.begin());
        }
        int next=count;
        for(int i=next;i<ost.size();i+=2){
            if(i==ost.size()-1){
                count=1;
            }else{
                count=0;
            }
            auto it=*ost.find_by_order(i);
            vec.push_back(it);
        } 
        for(auto i: vec){
            cout<<i<<" ";
            ost.erase(i);
        }
    }

    
    
    return 0;
}