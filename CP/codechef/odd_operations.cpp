#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){
    int n, flag=0, max_digit=0,  max_digit_index, index=0;
    cin>>n;
    int m=n,r;

    if(n%2==1){
        cout<<0<<endl;
        return;
    }

    while(m){
        r=m%10;
        m=m/10;
        index++;

        if(r%2==1) flag=1;
        if(flag==1){
            cout<<1<<endl;
            return;
        }

        if (max_digit < r){
            max_digit=r;
            max_digit_index=index;
        }
    }

    if(max_digit_index == 1 && index!=1) cout<<3<<endl;
    else if(max_digit_index != 1 && index!=1) cout<<2<<endl;
    else                                 cout<<-1<<endl;
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}