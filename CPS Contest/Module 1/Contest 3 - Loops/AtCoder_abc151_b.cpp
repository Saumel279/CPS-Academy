#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef double dl;

#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
void solve()
{
    int n, k, m;
    cin >> n >> k >> m;
    vi v(n - 1);
    int sum = 0;
    for (auto &u : v)
    {
        cin >> u;
        sum += u;
    }
    if ((sum / n - 1) >= m)
    {
        cout << 0 << endl;
        return;
    }
    if ((sum + k) / n < m)
    {
        cout << -1 << endl;
        return;
    }
    int ans = 0;
    for (int i = 0; i <= k; i++)
    {
        if ((sum + i) / n >= m)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
int main()
{
    optimize();

    solve();

    return 0;
}