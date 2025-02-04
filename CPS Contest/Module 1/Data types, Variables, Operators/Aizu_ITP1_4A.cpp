#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long a,b;
    cin >> a >> b;
    double x = a * 1.00;
    double y = b * 1.00;
    int d = a / b;
    int r = a % b;
    double f = x / y;
    cout << d << " " << r << " ";
    cout << fixed << setprecision(5) << f << endl;
    return 0;
}