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
void solve()
{
    vi v1(3);
    vi v2(3);

    cin >> v1[0] >> v1[1]  >> v1[2];
    cin >> v2[0] >> v2[1] >> v2[2];
    sort(v1.rbegin(),v1.rend());
    sort(v2.rbegin(),v2.rend());

    int p1 = v1[0] * 100 + v1[1] * 10 + v1[2];
    int p2 = v2[0] * 100 + v2[1] * 10 + v2[2];

    if(p1 == p2) cout << "Tie" << endl;
    else if(p1 > p2) cout << "Alice" << endl;
    else cout << "Bob" << endl;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
    solve();

    return 0;
}