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
    int n,k;
    cin >> n >> k;

    vi v(n);
    for(auto &u : v) cin >> u;

    vi v2(k);
    for(auto &u : v2) cin >> u;

    int sum = 0;
    for(int i = 0; i < k; i++)
    {
        sum += v[v2[i] - 1];
    }
    cout << sum << endl;
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