#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long
#define all(v) v.begin(), v.end()
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    char t;
    cin >> s;
    /*while(j<n){
        if(s[i]=='1'){     i++; j++; }

        if(s[j] == '0'){
            j++;
            }
            else{
                cout<<s[i]<<" "<<s[j]<<endl;
                t = s[i];
                s[i] = s[j];
                s[j] = t;
                swaps++;
                cout<<s[i]<<" "<<s[j]<<endl;
                }

    }*/

    int swaps = 0, balance = 0;
for (int i = 0; i < n; i++) {
    if (s[i] == '1') balance++;
    else balance--;

    if (balance < 0) {
        swaps++;
        balance += 2;
    }
}

cout << swaps << endl;
    int vote = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            vote--;
        }
        else
        {
            vote++;
        }

        if (vote >= 0)
            ans++;
    }

    cout << ans << " " << swaps << endl;
}

int32_t main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}