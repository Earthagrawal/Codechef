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
    cin >> s;
    int leading = 0;
    int answer = 0;
    char t;
    int i;

    for (i = 0; i < n; i++)
    {
        t=s[i];

        if (t=='1')
        {
            leading++;
        }
        else
        {
            leading--;
        }

        if (leading > 0)
        {
            answer++;
        }
    }

    cout << answer << endl;
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