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
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] != '0')
        {
            cnt++;
        }
    }
    vector<string> sv;
    while(cnt--)
    {
        string str;
        for(int i = s.size() - 1; i >= 0; i--)
        {
            if(s[i] != '0')
            {

                str += s[i];
                s[i] = '0';
                break;
            }
            else str += '0';
        }
        reverse(str.begin(), str.end());
        sv.push_back(str);
    }
    cout << sv.size() << endl;
    for(auto u : sv)
    {
        cout << u << " ";
    }
    cout << endl;
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