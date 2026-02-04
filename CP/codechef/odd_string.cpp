#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n; cin>>n;
    string s;
    cin>>s;
    map <int,int> mp;
    for(int i=0; i<n; i++){
        mp[s[i]] ++;
    }

    int flag=0;
    for(auto i: mp){
        if(i.second >2){
            flag=1;
        }
    }

    if(flag) cout<<"NO"<<endl;
    else     cout<<"YES"<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}