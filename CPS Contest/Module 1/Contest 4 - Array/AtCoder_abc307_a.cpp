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
    int n;
    cin >> n;
    int c = 0, sum = 0;
    vi v;
    for (int i = 0; i < n * 7; i++)
    {
        int temp;
        cin >> temp;
        sum += temp;
        c++;
        if (c == 7)
        {
            c = 0;
            v.push_back(sum);
            sum = 0;
        }
    }
    for(auto u : v)
    {
        cout << u << " ";
    }
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