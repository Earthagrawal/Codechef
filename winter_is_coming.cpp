#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n,a,b,f=0, cnt=0,t;
    cin>>n>>a>>b;

    while(n--){
        cin>>t;
        if(t<a && f==0){
            f=1;
            cnt++;
        }
        if(t>b && f==1){
            f=0;
        }
    }

    cout<<cnt<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}