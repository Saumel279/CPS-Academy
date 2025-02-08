#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int a[n + 1];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int temp = 0;
    for(int i = p + temp; i <= q; i++)
    {
        for(int j = r + temp; j <= s; j++)
        {
            swap(a[i],a[j]);
            break;
        }
        temp++;
    }
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
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