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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int a = v[0],b = v[0] ,ans = 0;

    for (int i = 1; i < n; i++)
    {
        b = max(b,v[i]);
        a = min(a, v[i]);
        if ((abs(b-a) - k) > 0)
        {
            ans++;
            i++;
            if (i < n)
            {
                a = v[i];
                b = v[i];
            }
        }
    }

    cout << ans << endl;
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