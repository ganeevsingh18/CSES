
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin>>s;
    vector<char> vec(s.size());
    for(int i=0;i<s.size();i++) vec[i]=s[i];
    sort(vec.begin(),vec.end());
    int count=0;
    do{
        count++;
    }while(next_permutation(vec.begin(),vec.end()));
    cout<<count<<endl;
    
    do{
        s=string(vec.begin(),vec.end());
        cout<<s<<endl;
    }while(next_permutation(vec.begin(),vec.end()));
    
}