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
#define check cout << "pukupuku" << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for(auto &u : v1) cin >> u;

    vector<int> v2(n + 1,0);
    for (int i = 0; i < n; i++)
    {
        if(v2[i + 1] == 1) continue;
        else
        {
            v2[v1[i]] = 1;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(v2[i] == 0) cnt++;
    }
    cout << cnt;
    nl;
    for(int i = 1; i <= n; i++)
    {
        if(v2[i] == 0) cout << i << " ";
    }
    nl;
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