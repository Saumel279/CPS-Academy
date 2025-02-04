#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double r;
    cin >> r;
    long double ans = M_PI * 2 * r;
    long double ans2 = M_PI * r * r;
    cout << fixed << setprecision(6) << ans2 <<  " " << ans << endl;
    return 0;
}