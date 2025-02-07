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
    int x,n;
    cin >> x >> n;
    if(x * 100 > n)
    {
        cout << 0 << endl;
        return;
    }
    if(n % 100 == 0)
    {
        int ans = n / 100;
        cout << abs(ans - x) << endl;
    }
    else
    {
        int ans = n / 100;
        cout << abs(ans - x) + 1 << endl;
    }
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