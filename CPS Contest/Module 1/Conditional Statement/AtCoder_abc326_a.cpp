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
    int x,y;
    cin >> x >> y;

    if(x >= y)
    {
        int dis = abs(x - y);
        if(dis <= 3) yes;
        else no;
    }
    else if(x < y)
    {
        int dis = abs(x - y);
        if(dis == 2) yes;
        else no;
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