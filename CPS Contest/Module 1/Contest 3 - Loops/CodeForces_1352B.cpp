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
    ll n;
    int k;
    cin >> n >> k;
    if ((n - (k - 1)) % 2 != 0)
    {
        ll rem = n - (k - 1);
        if (rem > 0 && rem % 2 != 0)
        {
            yes;
            int temp = k - 1;
            while (temp--)
            {
                cout << 1 << " ";
            }
            cout << rem << endl;
        }
        else
            no;
    }
    else if ((n - ((k - 1) * 2)) % 2 == 0)
    {
        ll rem = n - ((k - 1) * 2);
        if (rem > 0 && rem % 2 == 0)
        {
            yes;
            int temp = k - 1;
            while (temp--)
            {
                cout << 2 << " ";
            }
            cout << rem << endl;
        }
        else
            no;
    }
    else
        no;
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