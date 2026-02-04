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
    int t, n, ls = 0, s = 0;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t)
        {
            s++;
            ls = max(ls, s);
        }
        else
        {
            s = 0;
        }
    }

    cout << ls << endl;
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