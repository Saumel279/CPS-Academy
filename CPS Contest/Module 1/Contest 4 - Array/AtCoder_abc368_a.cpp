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
    int n, k;
    cin >> n >> k;

    int temp = n - k;
    vi v;
    for (int i = 0; i < temp; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    vi v2;
    for (int i = temp + 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        v2.push_back(temp);
    }
    for (auto u : v2)
        cout << u << " ";
    for (auto u : v)
        cout << u << " ";
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