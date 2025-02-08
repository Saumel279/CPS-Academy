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
    vector<int> v(8);
    bool satisfied = true;

    for(auto &u: v)
    {
        cin >> u;
        if(u % 25 != 0)
        {
            satisfied = false;
        }
        if(u < 100 || u > 675)
        {
            satisfied = false;
        }
    }
    if(!satisfied)
    {
        cout << "No" << endl;
        return;
    }
    bool yep = is_sorted(all(v));
    if(!yep)
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
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