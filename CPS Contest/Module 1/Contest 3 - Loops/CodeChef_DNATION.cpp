#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define nl cout << endl

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void solve()
{
    int n,m;
    cin >> n >> m;

    cout << abs(n - m) << endl;
    
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