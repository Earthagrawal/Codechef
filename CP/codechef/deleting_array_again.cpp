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
    int n, t;
    int cost = 0;
    cin >> n;
    deque<int> d1, d2;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        d1.push_back(t);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        d2.push_back(t);
    }

    while (n)
    {
        int i=0;
        int minimum =  d2[0];
        int index = 0;
        for (i = 1; i < n; i++)
        {
            if (minimum > d2[i])
            {
                index = i;
                minimum =  d2[i];
            }
        }

        cost += d1[index]*d2[index];

        d1.erase(d1.begin() + index);
        n--;
    }

    cout<< cost << endl;
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