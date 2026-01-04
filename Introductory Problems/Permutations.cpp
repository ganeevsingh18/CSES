#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n; 
    if(n>1 && n<4){ cout<<"NO SOLUTION"; return 0;}
    if(n==4){ cout<<"2 4 1 3"<<endl; return 0;}
    vector<int> vec(n); ll count=1;
    for(int i=0;i<n;i+=2){
        vec[i]=count; count++;
    }
    for(int i=1;i<n;i+=2){
        vec[i]=count; count++;
    }
    for(auto i: vec){
        cout<<i<<" ";
    }
    
}