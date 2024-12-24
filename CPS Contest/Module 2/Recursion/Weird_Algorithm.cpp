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

void fun(ll n)
{
    if(n == 1) return;
    if(n % 2 == 0) n /= 2;
    else n = (n * 3) + 1;
    cout << n << " ";
    fun(n);
}
int main()
{
    optimize();
    ll n;
    cin >> n;
    cout << n << " ";
    fun(n);
}