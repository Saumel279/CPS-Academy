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
    int n;
    cin >> n;
    int a[n + 1], ans = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        if(i <= 9)
        {
            if(a[i] >= i) ans++;
            if(a[i] >= i + i * 10) ans++;
        }
        if(i > 10)
        {
            if(i % 10 == i / 10)
            {
                if(a[i] >= i % 10) ans++;
                if(a[i] >= i) ans++;
            }
        }
    }
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