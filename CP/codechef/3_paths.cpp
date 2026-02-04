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
    int N;
    cin >> N;

    if (N == 2)
        cout << -1 << endl;

    else
        {
            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++)
                {
                    if ((j == (i + 1)) || (j == i) || (i == (N - 3) && (j == N - 1)) || ((i == N - 1) && j == (N - 2)))
                        cout << 1<<" ";
                    else
                        cout << 0<<" ";
                }
                cout << endl;
            }
        }
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