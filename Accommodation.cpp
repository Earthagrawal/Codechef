#include <bits/stdc++.h>
using namespace std;
 
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define all(v) v.begin() , v.end()
#define endl '\n' 
 
void solve(){

    int b,g,x,y,n;
	cin>>b>>g>>x>>y>>n;
	
	if((x+y) > n){
	    cout<<-1<<endl;
	}
	else{
        int rooms = (b+g+n-1)/n;
        int brooms = (b)/x;
        int grooms = (g)/y;
        if(rooms <= min(brooms , grooms)){ 
            cout<<rooms<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	
}
 
int32_t main(){
    int t;
    t=1;
    cin>>t;
    while(t--){
        solve();
    }
}