#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    
    for(auto &u : v)
    {
        cin >> u;
        sum += u;
    }
    if((long long)sqrt(sum) * (long long)sqrt(sum) == sum) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}