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
    int a1, a2;
    cin >> a1 >> a2;
    int b1, b2;
    cin >> b1 >> b2;

    int res_a = a1 - a2;
    int res_b = b1 - b2;
    int final = res_a + res_b;

    if(final < 0)
    {
        yes;  
    }
    else no;
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