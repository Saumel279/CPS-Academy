#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
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
    int n,k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(abs(v[i] - v[i+1]) <= k)
        {
            ans = v[i+1];
            break;
        }
    }
    if(ans == 0) cout << -1 << endl;
    else
    cout << ans << endl;
}
int main()
{
    optimize();

    int t = 1;
    // cin >> t;
    while (t--)
        solve();

    return 0;
}