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
    vector<pair<char, int>> freq;
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 65) && (s[i] <= 90))
        {
            s[i] += 32;
        }

        mp[s[i]]++;
    }

    for (auto it : mp)
    {
        freq.push_back(it);
    }

    // sorting the map based on vlaue not key
    sort(freq.begin(), freq.end(), [](const pair<char, int> &a, const pair<char, int> &b)
         { return a.second > b.second; });

    int ans = 0, ab;
    int m = (int)freq.size();
    if (2 > m)
        ab = m;
    else
        ab = 2;
    for (int i = 0; i < ab; i++)
    {
        ans += freq[i].second;
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