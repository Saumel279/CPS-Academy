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
    int x, y;
    cin >> x >> y;
    if(20 * y <= x)
    {
        cout << 20 << endl;
        return;
    }
    int ans = 0;
    int t1 = 20 * y;
    int t2 = abs(t1 - x);
    if(t2 % y != 0)
    {
        ans = (t2 / y) + 1;
    }
    else ans = (t2 / y);

    cout << 20 - ans << endl;
}
int main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}