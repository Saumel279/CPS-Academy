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
    int n, x;
    cin >> n >> x;
    int tot_player = n * 2;
    
    if((tot_player - x) >= x)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << tot_player - ((tot_player - x) * 2) << endl;
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