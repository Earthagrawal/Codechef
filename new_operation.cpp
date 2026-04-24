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
    vector<int> v(n), V;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    V = v;
    int X;
    for (int i = 0; i < n - 1; i++)
    {
        X = v[i] + 2 * v[i + 1];
        v[i + 1] = X;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        X = V[i] + 2 * V[i + 1];
        V[i] = X;
    }

    cout << v[n - 1] <<" "<< V[0] << endl;
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