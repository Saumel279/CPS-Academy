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
    vector<long long> v(n);
    vector<long long> ans;
    cin >> v[0];
    ans.push_back(v[0]);
    for(int i = 1; i < n; i++)
    {
        cin >> v[i];
        ans.push_back((v[i] - v[i - 1]));
    }
    for(auto u : ans) cout << u << " ";
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