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
vector<int> a(1000);
void solve()
{
    int n;
    cin >> n;

    int m;
    cin >> m;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t <= m)
            sum += t;
    }
    cout << sum << endl;
}
int main()
{
    optimize();

    // int t;
    // cin >> t;
    // while(t--)
    solve();

    return 0;
}