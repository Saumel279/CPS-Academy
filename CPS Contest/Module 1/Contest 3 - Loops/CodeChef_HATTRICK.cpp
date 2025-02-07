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
    bool pass = false;
    int cnt = 0;
    vector<char> ch;
    for (int i = 0; i < 6; i++)
    {
        char temp;
        cin >> temp;
        ch.push_back(temp);
        if (ch[i] == 'W')
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if(cnt == 3)
        {
            pass = true;
        }
    }
    if(pass) yes;
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