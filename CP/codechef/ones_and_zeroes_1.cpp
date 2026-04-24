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

    int vote=0,ans=0;
    for (int i=0; i<n; i++){
        if(s[i] == '0'){
            vote--;
        }
        else{
            vote++;
        }

        if(vote>=0)   ans++;
        
    }

    cout<<ans<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}