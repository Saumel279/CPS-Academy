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
    
}
int main()
{
    optimize();

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int a,b;
        cin >> a >> b;
        cout << "Case " << i << ": " << a + b << endl;
    }

    return 0;
}