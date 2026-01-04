#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    map<char,int> mp;
    for(auto i: s){
        mp[i]++;
    }
    ll check=0;
    char temp;
    for(auto i: mp){
        if(i.second%2==1){
            check++;
            temp=i.first;
        }
    }
    // cout<<check<<endl;
    // cout<<s.size()<<endl;
    if(s.size()%2==0){
        if(check!=0){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }else{
        if(check!=1){
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }
    
    vector<char> vec(s.size());
    int count=0;
    for(auto i: mp){
        for(int j=0;j<i.second/2;j+=1){
            vec[count]=i.first;
            vec[s.size()-1-count]=i.first;
            count++;
        }
    }
    if(s.size()%2==1){
    vec[s.size()/2]=temp;
    }
    for(auto i: vec){
        cout<<i;
    }cout<<endl;
    
}